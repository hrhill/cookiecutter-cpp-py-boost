cmake_minimum_required(VERSION 3.8)
project({{cookiecutter.project_name}}
            VERSION 0.0.0
            LANGUAGES CXX)

include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CTest)
include(ExternalProject)

find_package(PythonLibs 3.0 REQUIRED)
find_package(Boost 1.64.0 COMPONENTS python3 unit_test_framework REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(benchmarks)


# Documentation
# Doxygen
find_package(Doxygen REQUIRED dot)
if(DOXYGEN_FOUND)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
                   ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${PROJECT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Configuring doxygen")
endif(DOXYGEN_FOUND)

