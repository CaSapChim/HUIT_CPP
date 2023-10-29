#include <stdio.h>
#include <conio.h>

int main() {
    float a, b;

    printf("Nhap gia tri cua a: ");
    scanf("%f", &a);

    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh %.2fx + %.2f = 0 la x = %.2f\n", a, b, x);
    }

    _getch();
    return 0;
}