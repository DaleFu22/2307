#include <stdio.h>

#define SUM(x) (x) + (x)


int main(void)
{
	printf("%d\n",SUM(5));
	printf("%d\n",SUM(3) * SUM(3));//会被替换成(3)+(3)*(3)+(3) = 15

	return 0;
}
