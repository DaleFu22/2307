#include <stdio.h>

void func()
{
	int a = 8;
	static int b = 9;
	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
}

int main(void)
{
	char *p = "hello";
	int i;

//	for(i = 0;i < 5;i++)
//	{
		func();
		printf("p = %p\n",p);
//	}

	return 0;
}
