/*
 *将数字123转换为字符串123
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *num_to_string(int num,char *s);

int main(void) 
{
	//int m = 1233423;
	int m = 21123;
	char str[100] = {0};

	printf("%s\n", num_to_string(m,str));

	puts(str);

	return 0;
}

char *num_to_string(int num,char *s) 
{
	char *p,*q,t;

	p = q = s;

	while(num != 0) 
	{
		*s++ = num % 10 + 48;
		num /= 10;
	}
	*s = '\0';

	s--;
	while(q < s) 
	{
		t = *q;
		*q = *s;
		*s = t;
		q++;
		s--;
	}

	return p;
}
