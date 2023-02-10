#define MAX 100
#define for_loop(i, n) for (int i = 1; i <= n; i++)
#include <stdio.h>

void LK_NT(int n)
{
    bool check[MAX + 1];
    for_loop(i, n)
    {
        check[i] = true;
    }
    check[1] = false;
    for_loop(i, n)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
                check[j] = false;
        }
    }
    for_loop(i, n)
    {
        if (check[i] == true)
            printf("%d\n", i);
    }
}
int main()
{
    int n;
    printf("Nhap n");
    scanf("%d", &n);
    LK_NT(n);
}