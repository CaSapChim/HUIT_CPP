#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);

    int soLonNhat, soNhoNhat;

    if (a >= b && a >= c) {
        soLonNhat = a;
    } else if (b >= a && b >= c) {
        soLonNhat = b;
    } else {
        soLonNhat = c;
    }

    if (a <= b && a <= c) {
        soNhoNhat = a;
    } else if (b <= a && b <= c) {
        soNhoNhat = b;
    } else {
        soNhoNhat = c;
    }

    printf("So lon nhat la: %d\n", soLonNhat);
    printf("So nho nhat la: %d", soNhoNhat);

    _getch();
    return 0;
}