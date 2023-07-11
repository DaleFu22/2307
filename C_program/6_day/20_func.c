#include <stdio.h>
#include <string.h>

void print_array(char **p,int n);
void sort_array(char **p,int n);

int main(void)
{
	char * name []= {"red","green","apple","blue"};
	printf("排序前:");
	print_array(name,4);
	sort_array(name,4);
	printf("排序后:");
	print_array(name,4);
	
	return 0;
}

void sort_array(char **p,int n)
{
	int i,j;
	char *temp;
	for(i = 0;i < n-1;i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(strcmp(p[j],p[j+1]) > 0)
			{
				/*交换指针的指向，不能交换内容*/
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}

void print_array(char **p,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%s\t",p[i]);
	}
	puts("");
}
