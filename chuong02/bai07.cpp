// Tính chu vi, diện tích, đường chéo của hình vuông
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float a, chuVi, dienTich, duongCheo;
    printf("Nhap do dai canh hinh vuong: ");
    scanf("%f", &a);

    chuVi = a * 4;
    dienTich = a * a;
    duongCheo = a * sqrt(2);

    printf("Chu vi hinh vuong la: %.2f\n", chuVi);
    printf("Dien tich hinh vuong la: %.2f\n", dienTich);
    printf("Duong cheo hinh vuong la: %.2f\n", duongCheo);
    _getch();
    return 0;
}