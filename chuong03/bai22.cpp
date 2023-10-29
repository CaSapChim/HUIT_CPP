#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    _getch();
    return 0;
}