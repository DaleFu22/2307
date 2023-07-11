#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char temp[50];
    char str[][50] = {"How","are","You","and","OK"};

    for(i = 0;i < 4;i++)//比较趟数
    {
        for(j = 0;j < 4-i;j++)
        {
            if(strcmp(str[j],str[j+1]) > 0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    puts("");

    for(i = 0;i < 5;i++)
    {
        printf("%s\t",str[i]);
    }

    return 0;
}
