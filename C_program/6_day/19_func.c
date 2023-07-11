#include <stdio.h>

void print_array(char **p,int n);

int main(void)
{
	char *a[4] = {"how","are","you","?"};

	print_array(a,4);

	return 0;
}

//void print_array(char *p[4],int n)
//void print_array(char *p[],int n)
void print_array(char **p,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%s\t",p[i]);
//		printf("%s\t",*(p+i));
	}
	puts("");
}
