#include <stdio.h>
#include <stdlib.h>

struct u{
		char sex;
		float weight;
};

struct test{
		int age;
		char name[20];
		struct u stu;
		float score;
};

int main(void)
{
	struct test *p;
	p = (struct test *)malloc(sizeof(struct test));

	scanf("%d",&p->age);
	scanf("%s",p->name);
	scanf("%f",&p->score);
	getchar();
	scanf("%c",&p->stu.sex);
	scanf("%f",&p->stu.weight);

	printf("%d\t",(*p).age);
	printf("%s\t",(*p).name);
	printf("%f\t",(*p).score);
	printf("%c\t",p->stu.sex);
	printf("%f\n",p->stu.weight);

	return 0;
}
