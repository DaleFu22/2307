#include <stdio.h>

void print_array(int (*p)[3],int b,int c);

int main(void)
{
	int a[2][3] = {
				{3,5,1},
				{6,8,7}
	};
	
	print_array(a,2,3);
	
	return 0;
}

void print_array(int (*p)[3],int b,int c)
{
	int i,j;
	for(i = 0;i < b;i++)
	{
		for(j = 0;j < c;j++)
		{
			printf("%d\t",p[i][j]);
			printf("%d\t",*(*(p+i)+j));
		}
		puts("");
	}
}
