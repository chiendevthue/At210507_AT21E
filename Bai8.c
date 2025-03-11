#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Nhap vao 1 so: ");
    int x,y=1;
    scanf("%d",&x);
    int i=x;
    while (i>=1)
    {
        y*=i;
        i--;
    }
    printf("Giai thua cua so vua nhap la: %d",y);
    return 0;
}

