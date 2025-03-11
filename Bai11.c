#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x;
    printf("Nhap so: ");
    scanf("%d",&x);
    printf("Co so 16 la: %x\n",x);
    printf("Co so 8 la: %o\n",x);
    printf("Co so 2 la: ");
    for (int i=31;i>=0;i--)
    {
        int y=x>>i & 0x1;
        printf("%d",y);
    }
    return 0;
}
