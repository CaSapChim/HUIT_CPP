// Tính chu vi, diện tích của đường tròn
#include <stdio.h>
#include <conio.h>

const float PI = 3.14;
int main() {
    float r, chuVi, dienTich;
    printf("Nhap vao ban kinh cua duong tron: ");
    scanf("%f", &r);

    chuVi = r * 2 * PI;
    dienTich = r * r * PI;

    printf("Chu vi duong tron la: %.2f\n", chuVi);
    printf("Dien tich duong tron la: %.2f", dienTich);
    _getch();
    return 0;
}