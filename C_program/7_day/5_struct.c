#include <stdio.h>
#include <string.h>

struct student{
		int age;
		char name[50];
		float score;
};

int main(void)
{
	struct student stu1;
	stu1.age = 19;
	strcpy(stu1.name,"zs");
	stu1.score = 99.9;

	printf("%d\n",stu1.age);
	printf("%s\n",stu1.name);
	printf("%f\n",stu1.score);

	return 0;
}
