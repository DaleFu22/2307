#include "../include/fun.h"

void print_struct(void)
{
	struct test t = {4,'c'};
	printf("%d\n",t.a);
	printf("%c\n",t.b);
}
