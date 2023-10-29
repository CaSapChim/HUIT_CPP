#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, c;

    printf("Nhap do dai canh a: ");
    scanf("%f", &a);
    printf("Nhap do dai canh b: ");
    scanf("%f", &b);
    printf("Nhap do dai canh c: ");
    scanf("%f", &c);

    if (a == b && b == c) {
        printf("Tam giac đeu.\n");
    } else if (a == b || a == c || b == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Tam giac vuong can.\n");
        } else {
            printf("Tam giac can.\n");
        }
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Tam giác vuong.\n");
    } else {
        printf("Tam giac thuong.\n");
    }

    _getch();
    return 0;
}