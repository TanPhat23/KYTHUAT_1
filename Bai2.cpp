#include <stdio.h>

void TimSTN(int n)
{
    int a, b, c;
    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            for (c = 1; c <= n; c++)
            {
                if (a * a + b * b == c * c && a <= b)
                    printf("a:%d b:%d c:%d\n", a, b, c);
            }
        }
    }
}
int main()
{
    int n;
    printf("Nhap n");
    scanf("%d", &n);
    TimSTN(n);
}