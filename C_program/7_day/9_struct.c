#include <stdio.h>
#include <string.h>

struct student{
		int age;
		char name[50];
		float score;
		long double a;
		char b;
};

int main(void)
{
	struct student stu1;

	printf("sizeof(stu1) = %lu\n",sizeof(stu1));
	printf("sizeof(strcut student) = %lu\n",sizeof(struct student));

	printf("%p\n",&stu1.age);
	printf("%p\n",stu1.name);
	printf("%p\n",&stu1.score);

	return 0;
}

