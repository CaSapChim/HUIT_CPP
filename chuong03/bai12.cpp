#include <conio.h>
#include <stdio.h>

int main() {
    int a, b;
    char phepToan;
    printf("Nhap 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    printf("Nhap phep toan (+, -, *, /): ");
    rewind(stdin);
    scanf("%c", &phepToan);

    if (phepToan == '+') printf("Tong la: %d", a + b);
    if (phepToan == '-') printf("Hieu la: %d", a - b);
    if (phepToan == '*') printf("Tich la: %d", a * b);
    if (phepToan == '/') printf("Thuong la: %d", a / b);

    _getch();
    return 0;
}