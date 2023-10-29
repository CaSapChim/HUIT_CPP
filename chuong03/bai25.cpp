#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i += 2) {
        sum += i;
    }

    printf("%d", sum);

    _getch();
    return 0;
}