#include <stdio.h>
#include <math.h>
using namespace std;
bool KT_NT(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void LK_NT(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (KT_NT(i))
            printf("%d\t", i);
    }
}
int main()
{
    int n;
    printf("Nhap n");
    scanf("%d", &n);
    LK_NT(n);
}