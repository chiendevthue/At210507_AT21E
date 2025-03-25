#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,T,i;
    printf("Nhap so thu tu phan tu: ");
    int c,x;
    int a=1,b=1;
    scanf("%d",&x);
    if (x>=3)
    {
        for (i=3; i<=x; i++)
        {
            c=a;
            a+=b;
            b=c;
            if (i==x)
            {
                printf("%d\n",a);
            }
        }

    }
    else if (x==1)
    {
        printf("1\n");
    }
    else if (x==2)
    {
        printf("1\n");
    }
    return 0;
}
