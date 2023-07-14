#include <stdio.h>

//extern int a = 6;//声明时是不能赋值的
extern int a;

void print_num(void)
{
	printf("&a = %p\n",&a);
	printf("a = %d\n",a);
}
