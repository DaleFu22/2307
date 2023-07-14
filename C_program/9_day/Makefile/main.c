#include <stdio.h>

int div_num(int a,int b);
int mul_num(int a,int b);
int sub_num(int a,int b);
int add_num(int a,int b);
void print_hello(void);

int main(void)
{
	printf("调用函数:\n");
	print_hello();
	printf("%d\n",add_num(9,3));
	printf("%d\n",sub_num(9,3));
	printf("%d\n",mul_num(9,3));
	printf("%d\n",div_num(9,3));

	return 0;
}



