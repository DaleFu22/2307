#include <stdio.h>

#define MAX(a,b)	((a) > (b)? (a):(b))

int main(void)
{	
	printf("%d\n",MAX(6,2));
	printf("%d\n",MAX(2,6));

	return 0;
}
