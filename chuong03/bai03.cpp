#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);

    if (a % 2 == 0) 
        printf("%d la so chan.", a); 
    else
        printf("%d la so le.", a);

    _getch();
    return 0;
}