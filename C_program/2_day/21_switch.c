#include <stdio.h>

int main(void)
{
    int score;
    printf("请输入您的分数:");
    scanf("%d",&score);

    switch(score/10)
    {
        case(10):break
        case(9):
        {
            printf("A\n");
        }
        break;
        case(8):
        {
            printf("B\n");
        }
        break;
        case(7):
        {
            printf("C\n");
        }
        break;
        case(6):
        {
            printf("D\n");
        }
        break;
        default:
        {
            printf("E\n");
        }
        break;
    }

    return 0;
}

