#include <conio.h>
#include <stdio.h>

int chanLe(int a) {
    if (a % 2 == 0) 
        return 1;
    else 
        return 0;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (chanLe(x) == 1) 
        printf("%d la so chan", x);
    else 
        printf("%d la so le", x);

    _getch();
    return 0;
}