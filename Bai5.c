#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Nhap vao 1 so: ");
    int x,i;
    scanf("%d",&x);
    printf("Cac uoc cua so vua nhap la: ");
    for (i=1;i<=(x/2);i++)
    {
        if (x%i==0)
            printf("%d ",i);
    }
    return 0;
}

