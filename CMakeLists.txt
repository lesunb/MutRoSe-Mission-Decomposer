cmake_minimum_required(VERSION 4.0.0)

project(mutrose)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

if(WIN32)
    flex_target(hddltoken src/hddl/hddl-token-win.l src/hddl/hddl-token.cpp COMPILE_FLAGS "--yylineno")
    flex_target(rannottoken src/rannot/rannot-token-win.l src/rannot/rannot-token.cpp)
    flex_target(queryparsertoken src/queryparser/queryparser-token-win.l src/queryparser/queryparser-token.cpp)
    flex_target(conditionparsertoken src/conditionparser/conditionparser-token-win.l src/conditionparser/conditionparser-token.cpp)
else()
    flex_target(hddltoken src/hddl/hddl-token.l src/hddl/hddl-token.cpp COMPILE_FLAGS "--yylineno")
    flex_target(rannottoken src/rannot/rannot-token.l src/rannot/rannot-token.cpp)
    flex_target(queryparsertoken src/queryparser/queryparser-token.l src/queryparser/queryparser-token.cpp)
    flex_target(conditionparsertoken src/conditionparser/conditionparser-token.l src/conditionparser/conditionparser-token.cpp)
endif()

bison_target(hddl src/hddl/hddl.y ${CMAKE_CURRENT_BINARY_DIR}/src/hddl/hddl.cpp DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/src/hddl/hddl.hpp)
bison_target(rannot src/rannot/rannot.y ${CMAKE_CURRENT_BINARY_DIR}/src/rannot/rannot.cpp DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/src/rannot/rannot.hpp)
bison_target(queryparser src/queryparser/queryparser.y ${CMAKE_CURRENT_BINARY_DIR}/src/queryparser/queryparser.cpp DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/src/queryparser/queryparser.hpp)
bison_target(conditionparser src/conditionparser/conditionparser.y ${CMAKE_CURRENT_BINARY_DIR}/src/conditionparser/conditionparser.cpp DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/src/conditionparser/conditionparser.hpp)

add_flex_bison_dependency(hddltoken hddl)
add_flex_bison_dependency(rannottoken rannot)
add_flex_bison_dependency(queryparsertoken queryparser)
add_flex_bison_dependency(conditionparsertoken conditionparser)

find_package(Boost 1.83.0 REQUIRED COMPONENTS filesystem)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.hpp")

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${BISON_hddl_OUTPUTS}
    ${FLEX_hddltoken_OUTPUTS}
    ${BISON_rannot_OUTPUTS}
    ${FLEX_rannottoken_OUTPUTS}
    ${BISON_queryparser_OUTPUTS}
    ${FLEX_queryparsertoken_OUTPUTS}
    ${BISON_conditionparser_OUTPUTS}
    ${FLEX_conditionparsertoken_OUTPUTS}
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Boost::filesystem
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_BINARY_DIR}/src
)

set_property(TARGET ${PROJECT_NAME} PROPERTY ENABLE_EXPORTS ON)

install(TARGETS ${PROJECT_NAME})
