#include <stdio.h>

void print_array(int *a);

int main(void)
{
	int a[5] = {7,2,4,5,1};

	print_array(a);

	printf("%d\n",a[2]);

	return 9;
}

/*形参里的int a[5]会被处理成int *a*/
/*以下三种写法均会被处理成int *a*/
void print_array(int *a)
//void print_array(int a[])
//void print_array(int a[8848])
{
	int i;
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",a[i]);
	}
	puts("");
	a[2] = 666;
}
