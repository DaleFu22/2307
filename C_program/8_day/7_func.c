#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void assert_sucess(void);
void assert_failed(void);

#define assert_param(expr)	((expr)?((void) 0):(assert_failed()))

int main(void)
{
	int i = 9;

	assert_param(i==9);

	printf("hello\n");
}

void assert_sucess(void)
{
	printf("no problem...\n");
}

void assert_failed(void)
{
	printf("have a wrong thing happend...\n");

	kill(getpid(),SIGKILL);
}
