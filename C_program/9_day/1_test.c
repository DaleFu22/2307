#include <stdio.h>

int a;
int b = 8;
int c = 0;

int main(void)
{
	int d = 9;
	static int e;
	static int f = 10;
	char *p = "hello";
	char s[] = "world";

	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("&c = %p\n",&c);
	printf("&d = %p\n",&d);
	printf("&e = %p\n",&e);
	printf("&f = %p\n",&f);
	printf("p = %p\n",p);
	printf("&p = %p\n",&p);
	printf("s = %p\n",s);

	return 0;
}
