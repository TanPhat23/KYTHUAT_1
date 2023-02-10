#include <stdio.h>

void Uoc_Lon_Nhat(int a, int b){
    int Uoc;
    if(a > b) Uoc = a - b;
    else Uoc = b - a;
    printf("Uoc chung la %d", Uoc);
}
int main(){
    int a,b;
    printf("Nhap a");
    scanf("%d", &a);
    printf("Nhap b");
    scanf("%d", &b);
    Uoc_Lon_Nhat(a, b);
}