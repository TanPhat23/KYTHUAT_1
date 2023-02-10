#define MAX 100
#include <stdio.h>

void Fibonaci(int n)
{
    int F[100 + 1];
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    printf("F(%d) = %d\n", n, F[n]);
}
int main()
{
    int n;
    printf("Nhap n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        Fibonaci(i);
    }
}