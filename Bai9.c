#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int giai_thua (int x)
{
    int i,y=1;
    i=x;
    while (i>=1)
    {
        y*=i;
        i--;
    }
    return y;
}
int main()
{
    printf("Nhap vao 1 so: ");
    int x;
    double y=0;
    scanf("%d",&x);
    int i=1;
    while (i<=x)
    {
        int temp=giai_thua(i);
        y+= 1.0/((double)temp);
        i++;
    }
    printf("%.5lf",y);
    return 0;
}

