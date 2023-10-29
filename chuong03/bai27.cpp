#include <stdio.h>
#include <conio.h>

int main() {
    int x, y, n, b;
    printf("Nhap 2 so nguyen x va y: ");
    scanf("%d%d", &x, &y);

    if (x > y) n = x;
    else n = y;
    for (int i = 1; i <= n; i++) {
        b = n * i;
        if (b % x == 0 && b % y == 0) {
            printf("BCNN cua %d va %d la %d", x, y, b);
            i = n;
        }
    }
    for (int j = n; j > 0; j--) {
        if (x % j == 0 && y % j == 0) {
            printf("\nUCLN cua %d va %d la %d", x, y, j);
            j = 0;
        }
    }

    _getch();
    return 0;
}