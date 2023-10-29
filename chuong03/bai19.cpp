#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) sum += pow(i, 2);
    printf("ket qua: %d", sum);

    _getch();
    return 0;
}