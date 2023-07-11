/*
 *param:实现求x的n次方函数
 */

#include <stdio.h>

/*函数声明，可以不加形参变量名*/
//void x_n(int x,int n);
void x_n(int ,int );


int main(void)
{
	int x,n;
	printf("Please input a x:");
	scanf("%d",&x);
	printf("Please input a n:");
	scanf("%d",&n);

	x_n(x,n);
/*函数无返回值，不能直接这样调用*/
//	printf("%d\n",x_n(x,n));

	return 0;
}

void x_n(int x,int n)
{
	int sum = 1,i;
	for(i = 0;i < n;i++)
	{
		sum *= x;
	}
	printf("%d\n",sum);
}
