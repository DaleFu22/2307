/*
 *param:实现求x的n次方函数
 */

#include <stdio.h>

/*函数声明，可以不加形参变量名*/
//int x_n(int x,int n);
int x_n(int ,int );


int main(void)
{
	int x,n,ret;
	printf("Please input a x:");
	scanf("%d",&x);
	printf("Please input a n:");
	scanf("%d",&n);

	ret = x_n(x,n);
	printf("ret = %d\n",ret);
	printf("%d\n",x_n(x,n));

	return 0;
}

int x_n(int x,int n)
{
	int sum = 1,i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}

	return sum;
}
