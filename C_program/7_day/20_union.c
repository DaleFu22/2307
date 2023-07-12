#include <stdio.h>

union test{
	int a;
	char b;
	long c;
}u1;

union s{
	int d;
	char e;
}u4;

int main(void)
{
	//不允许对联合体所有成员进行初始化
//	union test u2 = {1,'c',32};
	union test u2 = {1};
	//如果指定元素初始化，则后面指定的会将前面指定的进行覆盖
	union test u3 = {.b = 'c',.a=65};

	printf("a = %d\n",u2.a);
	printf("b = %d\n",u2.b);
	printf("c = %ld\n",u2.c);
	printf("a = %d\n",u3.a);
	printf("b = %d\n",u3.b);
	printf("c = %ld\n",u3.c);


	return 0;
}
