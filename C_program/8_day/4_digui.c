#include <stdio.h>

int fac(int i)
{
	int j;
	if (i==0 || i==1) return 1;
	else j=fac(i-1)*i;
	return j;
}

int main(void)
{
	int ret = -1;
	ret = fac(3);

	printf("ret = %d\n",ret);

	return 0;
}
