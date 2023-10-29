#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    int tich = 1;

    printf("Nhap mot so: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tich *= i;
    }

    printf("Tich tu 1 den %d la: %d", n, tich);

    _getch();
    return 0;
}