#include <stdio.h>

static int a = 5;

void print_num(void);

int main(void)
{
	print_num();
	printf("&a = %p\n",&a);
	return 0;
}
