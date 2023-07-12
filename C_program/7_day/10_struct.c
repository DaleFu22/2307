#include <stdio.h>

struct test{	
	long n;	
	char x;	
	long double m;	
	char z;	
};	

struct student{	
	char a;	
	int b;	
	struct test t;	
	float c;	
	short d;	
	long e;	
};

int main(void)
{
	struct student stu;

	printf("sizeof(stu) = %lu\n",sizeof(stu));
	printf("%p\n",&stu.b);
	printf("%p\n",&stu.t.n);

	return 0;
}

