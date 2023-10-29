// Tính chu vi, diện tích cùa hình chữ nhật
#include <stdio.h>
#include <conio.h>

int main() {
    float chieuDai, chieuRong, chuVi, dienTich;

    printf("Nhap chieu dai cua hinh chu nhat: ");
    scanf("%f", &chieuDai);
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%f", &chieuRong);

    chuVi = (chieuDai + chieuRong) * 2;
    dienTich = chieuDai * chieuRong;

    printf("Chu vi cua hinh chu nhat la: %.2f\n", chuVi);
    printf("Dien tich cua hinh chu nhat la: %.2f", dienTich);
    _getch();
    return 0;
}