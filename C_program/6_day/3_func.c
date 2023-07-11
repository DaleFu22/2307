/*
 *param:实现求x的n次方函数
 */

#include <stdio.h>

/*函数声明，可以不加形参变量名*/
//void x_n(int x,int n);
void x_n(int ,int );


int main(void)
{
	int x = 8,n = 9;
	printf("调用x_n函数前:x = %d\ty = %d\n",x,n);
	x_n(x,n);
	printf("调用x_n函数后:x = %d\ty = %d\n",x,n);

	return 0;
}

void x_n(int a,int b)
{
	a = 89;
	b = 56;
}
