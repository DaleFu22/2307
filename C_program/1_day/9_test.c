#include <stdio.h>

int main(int argc, char **argv)
{
        int count, sum;   
        count = 0; sum = 0;
        while (++count < 20) //加到19
//        while (count++ < 20) //加到20
        {
                sum +=count;
        } 
        printf("sum = %d\n", sum);
        return 0;
}

