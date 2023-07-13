#include "../include/calculator.h"
#include "../include/fun.h"

int main(void)
{
	print_struct();
	printf("a+b = %d\n",add_num(6,2));
	printf("a-b = %d\n",sub_num(6,2));
	printf("a*b = %d\n",mul_num(6,2));
	printf("a/b = %d\n",div_num(6,2));

	return 0;
}
