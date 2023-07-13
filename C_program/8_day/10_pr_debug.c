#include <stdio.h>
#define NDEBUG
#include "debug.h"

int chang_num(int *p,int *q);

int main(void)
{
	int a = 8,b = 9,sum = 0;
	
	pr_debug("调用chang_num函数前:a = %d\tb = %d\n",a,b);//调试信息
	chang_num(&a,&b);
	pr_debug("调用chang_num函数后:a = %d\tb = %d\n",a,b);//调试信息
	
	sum = a + b;
	printf("a+b = %d\n",sum);//输出结果
}

int chang_num(int *p,int *q)
{
	*p = 888;
	*q = 222;
}
