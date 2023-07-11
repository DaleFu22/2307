#include <stdio.h>

void swap_array(int *p,int n);
void print_array(int *p,int n);

int main(void)
{
	int a[5] = {2,1,5,6,7};
	printf("调用交换函数前:");
	print_array(a,5);
	swap_array(a,5);
	printf("调用交换函数后:");
	print_array(a,5);
	
	return 0;
}

void swap_array(int *p,int n)
{
	int i,temp;
	for(i = 0;i < n/2;i++)
	{
		temp = *(p+i);
		*(p+i) = *(p+n-i-1);
		*(p+n-i-1) = temp;
	}
}

void print_array(int *p,int n)
{	
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%d\t",*(p+i));
	}
	puts("");
}
