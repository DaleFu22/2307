#include <stdio.h>
//#define NDEBUG //在这里加上NDEBUG可以选择屏蔽assert()断言
#include <assert.h>

int main(void)
{
	int i = 9;

	printf("你好\n");

	assert(i == 8);

	printf("hello world\n");

	return 0;
}
