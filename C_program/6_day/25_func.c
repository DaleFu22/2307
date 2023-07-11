#include <stdio.h>

int my_strcmp(const char *dest,const char *src);
int main(void)
{
	char s1[] = "howl";
	char s2[] = "how";
	int ret = -1;
	
	ret = my_strcmp(s2,s1);

	printf("ret = %d\n",ret);

	return 0;
}

int my_strcmp(const char *dest,const char *src)
{
	int ret;
	int i = 0;

	while(dest[i] != '\0' && src[i] != '\0')
	{
		ret = dest[i]-src[i];
		if(ret != 0)
			break;
		i++;
	}

	ret = dest[i] - src[i];

	return ret;
}

