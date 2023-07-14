#include <stdio.h>

/*static修饰函数时，将函数的作用域限制在本文件内调用*/
static void print_hello(void)
{
	printf("hello\n");
}

void print_world(void)
{
	print_hello();
	printf("world\n");
}
