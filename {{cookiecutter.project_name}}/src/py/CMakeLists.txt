add_library(
_{{cookiecutter.project_name}} SHARED
    {{cookiecutter.project_name}}_py.cpp)

target_link_libraries(
_{{cookiecutter.project_name}}
    Boost::python3)

target_include_directories(
_{{cookiecutter.project_name}}
    PRIVATE ${PYTHON_INCLUDE_DIRS}
    PRIVATE ${PROJECT_BINARY_DIR}/include
)

set_property(TARGET _{{cookiecutter.project_name}} PROPERTY CXX_STANDARD 14)
set_property(TARGET _{{cookiecutter.project_name}} PROPERTY PREFIX "")
set_property(TARGET _{{cookiecutter.project_name}} PROPERTY OUTPUT_NAME _{{cookiecutter.project_name}})
set_property(TARGET _{{cookiecutter.project_name}} PROPERTY LIBRARY_OUTPUT_DIRECTORY  ${PROJECT_BINARY_DIR}/{{cookiecutter.project_name}})

