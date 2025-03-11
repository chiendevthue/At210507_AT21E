#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x,y=0;
    for (int i=1;i<11;i++)
    {
        printf("Nhap so thu %d:",i);
        scanf("%d",&x);
        y+=x;
    }
    printf("Tong 10 so vua nhap la: %d",&y);
    return 0;
}
