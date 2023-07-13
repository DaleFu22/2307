#include <stdio.h>

int judge_endian(void);

union test{
	short a;
	char b;
};

int main(void)
{
	int ret = -1;

	ret = judge_endian();
	if(ret)
	{
		printf("小端序\n");
	}
	else
	{
		printf("大端序\n");
	}
	return 0;
}

int judge_endian(void)
{
	/*如果是大端序则返回0，否则返回1*/
	union test t;
	t.a = 0x1234;

	if(t.b == 0x12)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
