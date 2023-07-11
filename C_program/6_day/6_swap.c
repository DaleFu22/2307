/*
 *param:实现一个swap_num函数进行两个数的对调
 */
#include <stdio.h>

void swap_num(int *p,int *q);

int main(void)
{
	int a = 8,b = 9;
	
	printf("函数调用前:a = %d\tb = %d\n",a,b);
	swap_num(&a,&b);
	printf("函数调用后:a = %d\tb = %d\n",a,b);

	return 0;
}

void swap_num(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
