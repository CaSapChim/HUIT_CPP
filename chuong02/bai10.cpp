#include <conio.h>
#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float trungBinhCong;

    printf("Nhap vao 5 so nguyen: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    trungBinhCong = (a + b + c + d + e) / 5;
    printf("Trung binh cong cua 5 so la: %.2f", trungBinhCong);
    _getch();
    return 0;
}