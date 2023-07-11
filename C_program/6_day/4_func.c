/*
 *param:实现求x的n次方函数
 */

//#include <stdio.h>
#include "stdio.h"

/*函数声明，可以不加形参变量名*/
//int x_n(int x,int n);
int x_n(int ,int );

int main(void)
{
	int x,n,ret;
	
	ret = x_n(x_n(x_n(2,3),2),3);

	printf("ret = %d\n",ret);

	return 0;
}

void func(void);
int x_n(int x,int n)
{
	int sum = 1,i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}
	func();

	return sum;
}

void func(void)
{
	printf("hello world\n");
}
