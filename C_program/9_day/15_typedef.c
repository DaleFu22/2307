#include <stdio.h>

#define NEW		int*
typedef int *   my;

int main(void)
{
	NEW a,b;//预处理阶段会变成int *a,b此时a为指针变量，b为int型变量
	my i,j;//i和j统统都是指针变量。

	printf("sizeof(a) = %lu\n",sizeof(a));
	printf("sizeof(b) = %lu\n",sizeof(b));
	printf("sizeof(i) = %lu\n",sizeof(i));
	printf("sizeof(j) = %lu\n",sizeof(j));

	return 0;
}
