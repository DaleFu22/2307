#include <stdio.h>

int main(void)
{
        char *c[] = {"ENTER","NEW","POINT","FIRST"};
        char **cp[] = {c+3,c+2,c+1,c};
        char ***cpp = cp;
        printf("%s\n",**++cpp);
        printf("%s\n",*--*++cpp+3);
        printf("%s\n",cpp[-1][-1]+1);
        printf("%s\n",**++cpp);

        return 0;
}
