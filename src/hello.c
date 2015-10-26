
#include <Python.h>
#include <stdio.h>

static char module_docstring[] = "A simple \"Hello World\" example module.";
static char hello_docstring[] = 
    "hello(name='world') -> prints \"Hello <name>!\"";

static PyObject *hello_hello(PyObject *self, PyObject *args) {
    char* name = "World";
    if (!PyArg_ParseTuple(args, "|s", &name)) {
        return NULL;
    }
    printf("Hello, %s!\n", name);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef helloMethods[] = {
    {"hello", hello_hello, METH_VARARGS, hello_docstring},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC inithello(void) {
    Py_InitModule3("hello", helloMethods, module_docstring);
}

