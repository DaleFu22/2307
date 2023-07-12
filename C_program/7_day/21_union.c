#include <stdio.h>

union test{
	int a;
	char b;
	long double c;
};

union s{
	int d;
	char e[50];
	long double f;
};

int main(void)
{
	union test u1;
	union s u2;

	printf("sizeof(u1) = %lu\n",sizeof(u1));
	printf("sizeof(u2) = %lu\n",sizeof(u2));

	return 0;
}
