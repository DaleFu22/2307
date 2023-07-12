#include <stdio.h>

struct s{
		int c;
};

struct test{
		int a;
		char b;
		struct s ps;
};

struct student{
		int age;
		float score;
		char name[50];
		struct test *pt;
};

int main(void)
{
	int i;
	struct student stu = {18,98,"goudan"};
	struct student *pst = &stu;

	printf("%d\t%f\t%s\n",(*pst).age,(*pst).score,(*pst).name);
	printf("%d\t%f\t%s\n",pst->age,pst->score,pst->name);
	printf("c = %d\n",pst->pt->ps.c);

	return 0;
}
