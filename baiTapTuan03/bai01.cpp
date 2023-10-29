#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;

    printf("Nhap vao hai so a va b: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0) {
        printf("%d la boi so cua %d.\n", a, b);
    } else {
        printf("%d khong phai la boi so cua %d.\n", a, b);
    }
    _getch();
    return 0;
}