#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Nhap vao 1 so: ");
    int x,i,y=0;
    scanf("%d",&x);
    for (i=1; i<=(x); i++)
    {
        if (x%i==0)
            y+=i;
    }
    if (y==(2*x))
        printf("So %d la so hoan hao",x);
    else
        printf("So %d la so khong hoan hao",x);
    return 0;
}

