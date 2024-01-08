#include<python.h>

/**
 * print_python_list_info - pront puthon info
 * 
 * @p: pyObject list
 */
void print_python_list_info(PyObject *p)
{
	int s, alloc, a;
	PyObject *object;

	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] size of the Python List = %d\n:", s);
	printf("[*] Allocated = %d\n", alloc);

	for (a = 0; a < s; a++)
	{
		printf("Element %d: ", a);

		object = PyList_Getitem(p, a);
		printf("%s\n:", Py_TYPE(object)->tp_name);
	}
}
