#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double gdp,speed;
    int nam=2014;
    printf("Nhap vao GDP 2014 va toc do tang truong a:");
    scanf("%lf %lf",&gdp,&speed);
    double temp = gdp;
    printf("\t\t\tNam\t\t\tGDP\n");
     printf("\t\t\t2014\t\t\t%.2lf\n",gdp);
    do
    {
        nam++;
        temp += gdp*(speed/100.0);
        printf("\t\t\t%d\t\t\t%.2lf\n",nam,temp);
    }
    while ( temp <= 2.0*gdp);
    return 0;
}
