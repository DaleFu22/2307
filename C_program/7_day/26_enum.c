#include <stdio.h>

/*理解方式:可以把枚举类型理解为int类型的取别名的手段*/
enum test{
	a,
	b,
	c,
	d,
	e
};

int main(void)
{
	enum test t1;
/*对于未进行初始化的枚举，其默认值是从0开始进行顺序赋值*/
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	printf("e = %d\n",e);

	printf("sizeof(t1) = %lu\n",sizeof(t1));

	return 0;
}
