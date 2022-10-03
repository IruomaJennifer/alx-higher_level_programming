#include <Python.h>
#include <stdio.h>
/**
 * print_python_list_info - prints info
 * Description:
 * prints information about a python list
 * The format is:
 * [*] Size of the Python List is x
 * [*] Allocated = x
 * List of items with their type
 *
 * @p: pointer to list
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t size = PyList_Size(p), i;

	printf("[*] Size of the List = %d\n", size);
	printf("[*] Allocated = %d\n", Py_REFCNT(p));
	for (i = 0; i < size; i++)
		printf("Element %d: %s\n", i, Py_TYPE(PyList_GetItem(p, i)));
}
