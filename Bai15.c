#include <stdio.h>
#include <stdlib.h>
#define speed 0.0045
#include <math.h>
int main()
{
    double gdp;
    int n=1,month;
    printf("Nhap vao so tien va thang tiet kiem n:");
    scanf("%lf %d",&gdp,&month);
    do
    {
        double lai= gdp*speed;
        gdp+=lai;
        n++;
    }
    while (n==month);
    printf("%.2lf",gdp);
    return 0;
}
