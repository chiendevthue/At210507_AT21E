#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    double a=floor(sqrt(x));
    int b=(int)a;
    if (x==2||x==3||x==5)
    {
        printf("%d : la so nguyen to\n",x);
    }
    for (i=2; i<=b; i++)
    {
        if (x%i==0)
        {
            printf("%d : khong phai so nguyen to\n",x);
            break;
        }
        else if (i==b)
        {
            printf("%d : la so nguyen to\n",x);
        }
    }
    return 0;
}
