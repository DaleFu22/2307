#include <stdio.h>

struct test{
		char a:3;
		char :0;
		char b:3;
};

int main(void)
{
	struct test t;
	printf("sizeof(t) = %lu\n",sizeof(t));

	return 0;
}
