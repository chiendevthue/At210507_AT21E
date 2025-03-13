#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846
#include <math.h>
int main()
{
    double x,epsilo;
    printf("Nhap x va eps: ");
    scanf("%lf %lf",&x,&epsilo);
    int i=1;
    double e=1,n=1;
    do
    {
        n=n* (x/i);
        e=e+n;
        i++;
    }
    while (fabs(n)>epsilo);
    printf("e^%.2lf = %.6lf",x,e);
    return 0;
}
