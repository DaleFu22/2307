#include "stdarg.h"
#include <stdio.h>

int sum(int num_args,...)
{
	va_list p;//定义一个变量，用于指向参数列表
	va_start(p,num_args);//初始化变量，指向参数中的第一个值
	int sum = 0;
	int i,j;
	for(i = 0; i < num_args; i++)
	{
		j = va_arg(p,int);
		printf("%d\n",j);
		sum = sum + j;//获取第一个值，指向第二个值  
	}
	va_end(p);

	return sum;
}

int main()
{
	printf("%d\n",sum(6,1,2,3,4,5,6));
}

