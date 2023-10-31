#include <stdio.h>
#include <conio.h>
#include <math.h>

int soChinhPhuong(int x) {
    if (x > 0 && sqrt(x) == (int) sqrt(x)) return 1;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (soChinhPhuong(x))
        printf("%d la so chinh phuong", x);
    else 
        printf("%d khong phai la so chinh phuong", x);

    _getch();
    return 0;
}