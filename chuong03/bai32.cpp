#include <stdio.h>
#include <conio.h>

int main() {
    int sum = 0, n;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n;
        n--;
    }

    printf("Tong cac so tu nhien nho hon n: %d", sum);

    _getch();
    return 0;
}