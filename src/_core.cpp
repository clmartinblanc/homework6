#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  m.doc() = "HarmonicOscillator class";
  py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
      .def(py::init<>())
      .def("integrate", &HarmonicOscillator::integrate,
           "Description of the integrate method", py::arg("time_step"),
           py::arg("num_steps"), py::arg("initial_state"));
}
