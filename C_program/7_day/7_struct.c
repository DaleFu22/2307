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

	printf("sizeof(stu1) = %lu\n",sizeof(stu1));
	printf("sizeof(strcut student) = %lu\n",sizeof(struct student));

	scanf("%d",&stu1.age);
	scanf("%s",stu1.name);
	scanf("%f",&stu1.score);

	printf("%d\n",stu1.age);
	printf("%s\n",stu1.name);
	printf("%f\n",stu1.score);

	return 0;
}
