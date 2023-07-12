#include <stdio.h>

struct student{
		int age;
		char sex;
		char name[50];
		float score;
};

int main(void)
{
	//完全初始化
	struct student stu1 = {17,'m',"liuhaixin",60};
	//部分初始化，会按照结构体成员先后顺序进行赋值
	struct student stu2 = {18,'m'};
	//指定结构体成员进行初始化
	struct student stu3 = {.name = "bing",.age = 18};

	printf("name = %s\n",stu1.name);
	printf("age = %d\n",stu1.age);

	return 0;
}
