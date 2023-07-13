#include <stdio.h>

#undef BUFSIZ
#define BUFSIZ	100

int main(void)
{
	char buf[BUFSIZ];
	printf("BUFSIZ = %d\n",BUFSIZ);//BUFSIZ是最佳的缓冲区大小

	return 0;
}
