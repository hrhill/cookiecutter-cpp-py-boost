#include <boost/python.hpp>

#include "{{cookiecutter.project_name}}/version.hpp"

BOOST_PYTHON_MODULE(_{{cookiecutter.project_name}})
{
    namespace py = boost::python;

    py::scope().attr("VERSION") = {{cookiecutter.project_name}}::version::string();
    py::scope().attr("__verion__") = {{cookiecutter.project_name}}::version::string();

}
