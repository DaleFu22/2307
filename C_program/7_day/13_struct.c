#include <stdio.h>

struct student
{
	char a:3;
	char b:3;
	char c:2;
};

int main(void)
{
	struct student stu1;

	printf("sizeof(stu1) = %lu\n",sizeof(stu1));

	return 0;
}
