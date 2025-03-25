#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846
#include <math.h>
int main()
{
    double x,epsilo;
    printf("Nhap x va eps: ");
    scanf("%lf %lf",&x,&epsilo);
    x=(x*PI)/180;
    int i=0;
    double n,sing=0;
    do
    {
        double k=1;
        for (int j=1; j<=2*i+1; j++)
            k=k*j;
        n=pow(-1,i)*(pow(x,2*i+1)/k);
        sing+=n;
        i++;
    }
    while (fabs(n)>epsilo);
    printf("Gia tri la: %.6lf",sing);
    return 0;
}
