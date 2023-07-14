#include <stdio.h>

typedef struct test{
		int a;
		char b;
		float c;
}st,*pst;//st == struct test     pst == struct test *
//st和pst是通过typedef取得别名

struct student{
		int age;
		char name[20];
		flaot score;
}stu2,stu3;//stu2和stu3是struct student定义的变量

int main(void)
{
	st stu1 = {33,'c',3.14};
	pst pstu1 = &stu1;

	printf("%d\t%c\t%f\n",stu1.a,stu1.b,stu1.c);
	printf("%d\t%c\t%f\n",pstu1->a,pstu1->b,pstu1->c);

	return 0;
}
