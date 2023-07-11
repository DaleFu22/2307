#include <stdio.h>

int get_array_sum(int *p,int n);

int main(void)
{
	int a[5] = {5,3,7,9,6};

	printf("整个数组的和为:%d\n",get_array_sum(a,5));

	return 0;
}

int get_array_sum(int *p,int n)
{
	int i,sum = 0;
	for(i = 0;i < 5;i++)
	{
		sum += *(p+i);
	}
	return sum;
}
