#include <stdio.h>

#define N 10

int main(void)
{
	/*求2+10的和*/
	int a = 2,sum = 0;

	sum = a+N;

#if 0
	printf("hello");
#else
	printf("world\n");
#endif

	printf("sum = %d\n",sum);

	return 0;
}
