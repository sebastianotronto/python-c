#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include "sum.h"

static PyObject *csum(PyObject *self, PyObject *args) {
	int a, b, result;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return NULL;

	result = sum(a, b);
	return PyLong_FromLong(result);
}

static PyMethodDef SumMethods[] = {
	{ "sum_from_c", csum, METH_VARARGS, "Sum two integers." },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef summodule = {
	PyModuleDef_HEAD_INIT,
	"sum",
	NULL,
	-1,
	SumMethods
};

PyMODINIT_FUNC PyInit_sum_module(void) {
	return PyModule_Create(&summodule);
}
