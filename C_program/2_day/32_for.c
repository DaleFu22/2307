#include <stdio.h>

int main(void)
{
        int r;
        float area;
        for(r=1;r<=10;r++)
        { 
                area=3.14*r*r;
                if(area>100) 
                    break;//直接结束整个所在循环
                printf("%f\n",area);
                
        }

        return 0;
}
