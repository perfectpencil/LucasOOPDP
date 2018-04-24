cmake_minimum_required(VERSION 3.5)
project(LucasOOPDP)

set(CMAKE_CXX_STANDARD 14)

# set output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# look for includes in include directory
include_directories(include)

file(GLOB_RECURSE ALL_SOURCES RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" ${PROJECT_SOURCE_DIR}/src/*.cpp)

FOREACH ( item ${ALL_SOURCES} )
    STRING ( REGEX MATCH "(^|/)[.#]" skip ${item} )
    IF (NOT skip STREQUAL "" )
        continue()
    ENDIF (NOT skip STREQUAL "" )

    STRING(REGEX MATCH "(^|/)main" main ${item})
    STRING(REGEX MATCH "(^|/)test" test ${item})

    IF(main)
        LIST(APPEND MAINS ${item})
    ELSEIF(test)
        LIST(APPEND TESTS ${item})
    ELSE(main)
        LIST(APPEND SOURCES ${item})
    ENDIF(main)
ENDFOREACH(item ${ALL_SOURCES})

#
# adjust this to where you have cloned google test.  I keep my projects
# in the $HOME/projects folder, so:
#
#   cd ~/projects
#   git clone git@github.com:google/googletest.git

#set(GTEST_DIR $ENV{HOME}/projects/googletest)
set(GTEST_DIR c:/users/candy/projects/googletest)
#set(GTEST_DIR /mnt/c/Users/Candy/projects/googletest)

#
# these should be set relative to the GTEST_DIR folder
#
set(GTEST_TEST_DIR ${GTEST_DIR}/googletest)
set(GTEST_MOCK_DIR ${GTEST_DIR}/googlemock)

#
# googletest uses threads, even if you don't
#
find_package(Threads REQUIRED)

#
# need both directories to build the gtest library
#
include_directories(SYSTEM
        ${GTEST_TEST_DIR}/include
        ${GTEST_TEST_DIR}
        )

#
# build the static gtest library (goes in lib folder)
#
add_library(gtest STATIC ${GTEST_TEST_DIR}/src/gtest-all.cc include/Ant.h include/Direction.h include/FastAnt.h include/Movable.h include/MoveServant.h include/Position.h include/Slug.h)

#
# build the static sources library (all regular source files)
#
add_library(sources STATIC ${SOURCES} src/main.cpp src/Ant.cpp src/FastAnt.cpp src/Movable.cpp src/MoveServant.cpp src/Positon.cpp src/Slug.cpp src/TestMoveServant.cpp)

target_link_libraries(gtest ${CMAKE_THREAD_LIBS_INIT})

#
# need both directories to build the gtest library

#add_executable(LucasOOPDP src/main.cpp src/Ant.cpp include/Ant.h include/Direction.h src/Position.cpp include/Position.h src/Movable.cpp include/Movable.h src/MoveServant.cpp include/MoveServant.h src/FastAnt.cpp include/FastAnt.h include/Slug.h src/Slug.cpp src/TestMoveServant.cpp)
add_executable(TestMoveServant src/main.cpp src/TestMoveServant.cpp)
target_link_libraries(TestMoveServant ${CMAKE_THREAD_LIBS_INIT} gtest sources)