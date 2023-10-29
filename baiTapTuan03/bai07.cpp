#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    float a, b, r, chuVi, dienTich;
    const float PI = 3.14;

    printf("Chon so de tinh chu vi, dien tich cua 1 hinh\n");
    printf("[1]: Hinh vuong\n");
    printf("[2]: Hinh chu nhat\n");
    printf("[3]: Hinh tron\n");
    printf("Moi ban chon so: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Nhap do dai canh: ");
            scanf("%f", &a);
            printf("Chu vi hinh vuong la: %.2f", a * 4);
            printf("\nDien tich hinh vuong la: %.2f", a * a);
            break;
        case 2:
            printf("Nhap chieu dai va chieu rong: ");
            scanf("%f%f", &a, &b);
            printf("Chu vi hinh chu nhat la: %.2f", (a + b) * 2);
            printf("\nDien tich hinh chu nhat la: %.2f", a * b);
            break;
        case 3:
            printf("Nhap ban kinh: ");
            scanf("%f", &r);
            printf("Chu vi hinh tron la: %.2f", r * 2 * PI);
            printf("\nDien tich hinh tron la: %.2f", r * r * PI);
            break;
    }
    _getch();
    return 0;
}