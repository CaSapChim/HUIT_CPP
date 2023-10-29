#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) printf("%d ", i);
    }

    _getch();
    return 0;
}