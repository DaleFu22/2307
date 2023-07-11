#include <stdio.h>

void func(void);

int a = 3;
int b;

int main(void)
{
	a += 5;
	b += 5;
	printf("调用函数前:a = %d\tb = %d\n",a,b);
	func();
	printf("调用函数后:a = %d\tb = %d\n",a,b);

	return 0;
}

void func(void)
{
	a -= 3;
	b -= 3; 
}
