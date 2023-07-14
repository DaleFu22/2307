#include <stdio.h>

int main(void)
{
	int a = 4;

	printf("a = %d\n",a);
	{
		int a = 9;
		printf("a = %d\n",a);
	}
	printf("a = %d\n",a);

	return 0;
}
