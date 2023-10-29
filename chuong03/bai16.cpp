#include <conio.h>
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) sum += i;
    printf("Tong tu 2 den %d la: %d", n, sum);
    
    _getch();
    return 0;
}