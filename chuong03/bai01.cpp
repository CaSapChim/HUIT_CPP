#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &a);

    if (a > 0) 
        printf("%d la so nguyen duong.", a);
    else
        printf("%d la so nguyen am.", a);

    _getch();
    return 0;
}