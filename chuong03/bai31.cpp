#include <stdio.h>
#include <conio.h>

int main() {
    int n, m, count = 0;
    printf("Nhap n, m: ");
    scanf("%d%d", &n, &m);

    for (int i = n; i <= m; i+=2) {
        count++;
    }

    printf("So luong so chan la: %d", count);

    _getch();
    return 0;
}