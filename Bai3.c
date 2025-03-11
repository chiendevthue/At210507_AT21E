#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,i;
    for (i=1;i<=20;i++)
    {
        if (i==2)
            printf("%d",i);
        else if (i%2==0)
            printf("\t%d",i);
    }
    return 0;
}
