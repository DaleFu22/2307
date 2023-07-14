#include <stdio.h>

//register int c = 9;//register不能修饰一个全局变量

int main(void)
{
	int a = 9;
	register int b = 10;

	printf("a = %d\n",a);
	printf("b = %d\n",b);

	printf("&a = %p\n",&a);
//	printf("&b = %p\n",&b);//寄存器变量无法打印其地址，因为它不在内存中
}
