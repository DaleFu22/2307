#include <stdio.h>

struct test{
		int a;
		char b;
		float c;
};

typedef struct test tst;

int main(void)
{
	tst stu1 = {33,'c',3.14};

	printf("%d\t%c\t%f\n",stu1.a,stu1.b,stu1.c);

	return 0;
}
