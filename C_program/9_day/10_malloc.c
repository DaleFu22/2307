#include <stdio.h>
#include <stdlib.h>

int main(void)
{
#if 0
	void *p;
	p = malloc(4);
#endif
#if 0
	int *p;
	p = (int *)malloc(4);

	*p = 777;
	printf("*p = %d\n",*p);
#endif
	int a[60];
	int *p;
	p = (int *)malloc(sizeof(a));

	int i = 0;
	for(i = 0;i < 50;i++)
	{
		p[i] = i;
	}

	for(i = 0;i < 50;i++)
	{
		printf("%d\t",p[i]);
	}
	puts("");

	return 0;
}
