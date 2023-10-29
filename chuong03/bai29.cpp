#include <stdio.h>
#include <conio.h>

int main() {
    float soDien;
    float giaTien = 0.0;

    printf("Nhap so dien su dung trong thang (Kilowatt): ");
    scanf("%f", &soDien);

    if (soDien >= 1 && soDien <= 100) {
        giaTien += soDien * 5;
    } else if (soDien <= 150) {
        giaTien += 100 * 5 + (soDien - 100) * 7;
    } else if (soDien <= 200) {
        giaTien += 100 * 5 + 50 * 7 + (soDien - 150) * 10;
    } else if (soDien <= 300) {
        giaTien += 100 * 5 + 50 * 7 + 50 * 10 + (soDien - 200) * 15;
    } else {
        giaTien += 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (soDien - 300) * 20;
    }

    printf("So tien dien phai tra trong thang la: $%.2f\n", giaTien);

    _getch();
    return 0;
}