#include <stdio.h>

int calculate_low_case(char *s);

int main(void)
{
	int i = 0,ret;
	char s[100] = {0},ch;
	printf("Please input a string:");
	
	while((ch = getchar()) != '\n')
	{
		s[i++] = ch;
	}

	ret = calculate_low_case(s);

	printf("小写字母个数:%d\n",ret);
	printf("转换后:%s\n",s);

	return 0;
}

int calculate_low_case(char *s)
{
	int num = 0;
	while(*s != '\0')
	{
		if(*s >= 'a' && *s <= 'z')
		{
			num++;
			*s -= 32;
		}
		s++;
	}

	return num;
}
