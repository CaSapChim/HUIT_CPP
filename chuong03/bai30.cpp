#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int result = ((n > 5) ? n+=2 : 0);
    printf("Ket qua la: %d", result);

    _getch();
    return 0;
}