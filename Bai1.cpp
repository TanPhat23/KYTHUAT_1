#include <stdio.h>

int Uoc_Lon_Nhat(int a, int b)
{
    while (a != b)
        a > b ? a -= b : b -= a;
    printf("Uoc so chung lon nhat la %d", a);
}
int main()
{
    int a, b;
    printf("Nhap a");
    scanf("%d", &a);
    printf("Nhap b");
    scanf("%d", &b);
    Uoc_Lon_Nhat(a, b);
}