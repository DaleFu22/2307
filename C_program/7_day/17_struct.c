#include <stdio.h>

struct student{
		int age;
		float score;
		char name[50];
};

int main(void)
{
	int i;
	struct student stu[3];

	for(i = 0;i < 3;i++)
	{
		scanf("%d%f%s",&stu[i].age,&stu[i].score,stu[i].name);
	}

	for(i = 0;i < 3;i++)
	{
		printf("%d\t%f\t%s\n",stu[i].age,stu[i].score,stu[i].name);
	}

	return 0;
}
