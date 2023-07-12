#include <stdio.h>

union s{
	int a;
	long double b;
};

struct test{
	int c;
	long d;
	char e;
	union s u1;
	char f;
};

int main(void)
{
	struct test st1;

	printf("sizeof(st1) = %lu\n",sizeof(st1));

	printf("%p\n",&st1.e);
	printf("%p\n",&st1.u1.a);

	return 0;
}
