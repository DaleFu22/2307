#include <stdio.h>

#define SQR(x) x * x

int main(void)
{
	printf("%d\n",SQR(4));
	printf("%d\n",SQR(4+1));//会被替换成4+1*4+1=9

	return 0;
}
