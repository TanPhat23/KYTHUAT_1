#include <iostream>

using namespace std;

void LK_TSNT(int n)
{
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
}
int main()
{
    int n;
    printf("Nhap n");
    cin >> n;
    LK_TSNT(n);
}