#include <stdio.h>

void fun(void);
//void print_hello(void);
void print_world(void);

int main(void)
{
	int i = 0;
	
//	print_hello();
	print_world();

	printf("i = %d\n",i);
	for(i = 0;i < 5;i++)
	{
		fun();
	}

	return 0;
}

void fun(void)
{
	int c = 8;
	static int b;//static修饰局部变量，生命周期从定义开始到整个程序结束，作用域和普通局部变量一样
	b += 1;
	c += 1;

	printf("b = %d\n",b);
	printf("c = %d\n",c);
}
