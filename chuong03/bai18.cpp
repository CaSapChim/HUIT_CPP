#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (1.0 / i * (i + 1) * (i + 2));
    }

    printf("Ket qua: %.2f", sum);

    _getch();
    return 0;
}