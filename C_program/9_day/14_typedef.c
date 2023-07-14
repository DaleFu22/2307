#include <stdio.h>

#define new_int int
typedef int my_int;

int main(void)
{
	int i = 9;
	int j = i+0;
	my_int k = 666;
	new_int l = 888;

	printf("j = %d\n",j);
	printf("k = %d\n",k);
	printf("l = %d\n",l);

	return 0;
}

