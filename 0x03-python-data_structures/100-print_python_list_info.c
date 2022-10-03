#include "Python.h"

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
	PyListObject *p_list;
	Py_ssize_t size, index;
	PyObject *p_obj;
	struct _typeobject *type;

	if (strcmp(p->ob_type->tp_name, "list") == 0)
	{
		p_list = (PyListObject *)p;
		size = p_list->ob_base.ob_size;
		printf("[*] Size of the Python List = %ld\n", size);
		printf("[*] Allocated = %ld\n", p_list->allocated);
		for (i = 0; i < size; i++)
		{
			p_obj = p_list->ob_item[i];
			type = p_obj->ob_type;
			printf("Element %ld: %s\n", i, type->tp_name);
		}
	}
}
