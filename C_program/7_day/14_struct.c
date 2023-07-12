#include <stdio.h>

struct test{
	char a:3;
	char :4;
	char b:5;
	char c:4;
};

int main(void)
{
	struct test t;

	printf("sizeof(t) = %lu\n",sizeof(t));

	return 0;
}
