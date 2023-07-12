#include <stdio.h>

#define SQR(x) (x) * (x)

int main(void)
{
	printf("%d\n",SQR(4));
	printf("%d\n",SQR(4+1));

	return 0;
}
