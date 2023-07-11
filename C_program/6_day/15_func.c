#include <stdio.h>

void print(int n)
{
	printf("%d\t",n);
}
//当被调用函数写在调用函数之前，不需要声明
int main(void)
{
	int a[2][3] = {
				{1,4,2},
				{5,7,6}
	};
	int i,j;

	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 3;j++)
		{
			print(a[i][j]);//数组元素作实参是值传递
		}
		puts("");
	}


	return 0;
}

