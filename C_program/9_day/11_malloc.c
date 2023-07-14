#include <stdio.h>
#include <stdlib.h>

struct test{
		int age;
		char name[20];
		float score;
};

int main(void)
{
	struct test *p;
	p = (struct test *)malloc(sizeof(struct test));

	scanf("%d",&p->age);
//	scanf("%d",&(*p).age);
	scanf("%s",p->name);
	scanf("%f",&p->score);

	printf("%d\t",(*p).age);
	printf("%s\t",(*p).name);
	printf("%f\n",(*p).score);

	return 0;
}
