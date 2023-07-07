#include <stdio.h>

int main()
{   
        int i,*p,a[7];
        p=a;
        for(i=0;i<7;i++)
            scanf("%d",p+i);
        printf("\n");
        
//        p = a;
        for(i=0;i<7;i++)
        {
            printf("%d",*p);
            p++;
        }

        return 0;
}
