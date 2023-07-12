#include <stdio.h>

//#define N	10

int main(void)
{
#ifdef N
	printf("你好\n");
#else
	printf("再见\n");
#endif

	return 0;
}
