#include <stdio.h>

struct student{
		int age;
		char sex;
		char name[50];
		float score;
}stu1,stu2;//在定义结构体同时定义变量并初始化

int main(void)
{
	//初始化时才可以进行整体赋值
	struct student stu3  = {18,'w',"zs",100};
#if 0
	//不能对结构体进行整体赋值
	stu1 = {18,'m',"liu",59.9};
#endif
	//相同类型结构体变量之间可以直接进行赋值
	stu1 = stu3;
	printf("stu1:\n\tage = %d\n\tsex = %c\n\tname = %s\n\tscore = %f\n",stu1.age,stu1.sex,stu1.name,stu1.score);
	printf("stu3:\n\tage = %d\n\tsex = %c\n\tname = %s\n\tscore = %f\n",stu3.age,stu3.sex,stu3.name,stu3.score);

	return 0;
}
