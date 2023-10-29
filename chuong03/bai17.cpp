#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i * (i + 1);
    }

    printf("Ket qua: %d", sum);

    _getch();
    return 0;
}