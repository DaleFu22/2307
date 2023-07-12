#include <stdio.h>

struct student{
	int a;
	char b;
	long double c;
};

union s{
	int e;
	long f;
	struct student g;
	char h;
};

int main(void)
{
	union s u1;

	printf("sizeof(u1) = %lu\n",sizeof(u1));

	return 0;
}
