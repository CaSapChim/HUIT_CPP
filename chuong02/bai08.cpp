#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a > b) {
        printf("So lon nhat la: %d", a);
    } else {
        printf("So lon nhat la: %d", b);
    }
    _getch();
    return 0;
}