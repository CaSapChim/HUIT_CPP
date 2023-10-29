#include <stdio.h>
#include <conio.h>

int main() {
    float a, b;
    scanf("%f%f", &a, &b);

    printf("Tong: %.2f\n", a + b);
    printf("Hieu: %.2f\n", a - b);
    printf("Tich: %.2f\n", a * b);
    printf("Thuong: %.2f", a / b);

    _getch();
    return 0;   
}