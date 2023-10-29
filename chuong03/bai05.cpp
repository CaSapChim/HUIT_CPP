#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d%d", &a, &b);

    if (b % a == 0) 
        printf("%d la boi so cua %d", a, b);
    else 
        printf("%d khong phai la boi so cua %d", a, b);

    _getch();
    return 0;
}