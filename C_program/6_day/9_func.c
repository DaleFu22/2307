#include <stdio.h>

void print(int n);

int main(void)
{
	int i;
	int a[5] = {3,2,5,6,7};

	for(i = 0;i < 5;i++)
	{
		print(a[i]);//值传递
	}
	puts("");

	return 0;
}

void print(int n)
{
	printf("%d\t",n);
}
