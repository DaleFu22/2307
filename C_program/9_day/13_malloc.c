#include <stdio.h>
#include <stdlib.h>

struct test{
	int age;
	int score;
};

struct student{
	char name[20];
	struct test *stu;
	int num;
};

int main(void)
{
	struct student *p = (struct student *)malloc(sizeof(struct student));
	p->stu = (struct test *)malloc(sizeof(struct test));

	scanf("%s",p->name);
	scanf("%d",&p->stu->age);
	scanf("%d",&p->stu->score);
	scanf("%d",&p->num);

	printf("%s\t",p->name);
	printf("%d\t",p->stu->age);
	printf("%d\t",p->stu->score);
	printf("%d\n",p->num);

	free(p->stu);
	free(p);

	p->stu = NULL;
	p = NULL;

	return 0;
}
