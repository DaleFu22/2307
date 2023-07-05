#include <stdio.h>

int main(void)
{
    char score;
    printf("输入你的等级分\n");

    scanf("%c",&score);

    switch(score)
    {
        case 'A':printf("90~100\n");break;
        case 'B':printf("80~89\n");break;
        case 'C':printf("70~79\n");break;
        case 'D':printf("60~69\n");break;
        case 'E':printf("0~59\n");break;
        default:printf("输入不合法\n");
    }

    return 0;
}
