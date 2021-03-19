#include "pybind11/pybind11.h"

#include "xtensor/xmath.hpp"
#include "xtensor/xarray.hpp"

#define FORCE_IMPORT_ARRAY
#include "xtensor-python/pyarray.hpp"
#include "xtensor-python/pyvectorize.hpp"

#include <iostream>
#include <numeric>
#include <string>
#include <sstream>


// our headers
#include "example/example.hpp"
#include "example/example_config.hpp"

namespace py = pybind11;



namespace example {


    // implementation in def_myclass.cpp
    void def_class(py::module & m);

    // implementation in def_myclass.cpp
    void def_build_config(py::module & m);

    // implementation in def.cpp
    void def_build_config(py::module & m);

}


// Python Module and Docstrings
PYBIND11_MODULE(_example , module)
{
    xt::import_numpy();

    module.doc() = R"pbdoc(
        _example  python bindings

        .. currentmodule:: _example 

        .. autosummary::
           :toctree: _generate

           BuildConfiguration
           MyClass
    )pbdoc";

    example::def_build_config(module);
    example::def_class(module);

    // make version string
    std::stringstream ss;
    ss<<EXAMPLE_VERSION_MAJOR<<"."
      <<EXAMPLE_VERSION_MINOR<<"."
      <<EXAMPLE_VERSION_PATCH;
    module.attr("__version__") = ss.str().c_str();
}