#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, x;
    printf("Nhap a va b: ");
    scanf("%f%f", &a, &b);
    if (a == b) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.");
        } else {
            printf("Phuong trinh vo nghiem");
        }
    } else {
        x = -b / a;
        printf("Nghiem cua phuong trinh x la: %.2f", x);
    }

    _getch();
    return 0;
}