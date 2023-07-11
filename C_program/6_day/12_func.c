#include <stdio.h>

void print_array(int a[8848],int n);

int main(void)
{
	int a[5] = {7,2,4,5,1};
	int b[7] = {7,8,9,3,2,1,4};

	print_array(a,5);
	print_array(b,7);

	return 9;
}

void print_array(int a[8848],int n)
{
	int i;
	printf("sizeof(a) = %lu\n",sizeof(a));
	for(i = 0;i < n;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
}
