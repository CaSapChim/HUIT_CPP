#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    float a, b;
    const float PI = 3.14;

    printf("Tinh chu vi, dien tich cua mot hinh: \n");
    printf("[1] Hinh chu nhat \n");
    printf("[2] Hinh vuong \n");
    printf("[3] Hinh tron: \n");
    printf("Ban chon so: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Nhap chieu dai va chieu rong cua hinh chu nhat: ");
            scanf("%f%f", &a, &b);
            printf("Chu vi hinh chu nhat: %.2f\n", (a + b) * 2);
            printf("Dien tich hinh chu nhat: %.2f\n", a * b);
            break;
        case 2: 
            printf("Nhap canh hinh vuong: ");
            scanf("%f", &a);
            printf("Chu vi hinh vuong: %.2f\n", a * 4);
            printf("Dien tich hinh vuong: %.2f\n", a * a);
            break;
        case 3:
            printf("Nhap ban kinh hinh tron: ");
            scanf("%f", &a);
            printf("Chu vi hinh tron: %.2f\n", a * 2 * PI);
            printf("Dien tich hinh tron: %.2f\n", a * a * PI);
            break;
        default:
            printf("Ban nhap khong hop le. Vui long nhap lai!");
    }

    _getch();
    return 0;
}