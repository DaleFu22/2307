#include <stdio.h>

struct test{
		char a:5;
		char c:7;
		int b:20;
};

int main(void)
{
	struct test t;

	printf("sizeof(t) = %lu\n",sizeof(t));

	//位域不能打印出地址，因为内存的基本单位是字节不是位
//	printf("%p\n",&t.a);

	return 0;
}
