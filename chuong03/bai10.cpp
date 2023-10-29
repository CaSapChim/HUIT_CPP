#include <stdio.h>
#include <conio.h>

int main() {
    int year;
    printf("Nhap vao 1 nam: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Nam %d la nam nhuan.", year);
    else 
        printf("Nam %d khong phai la nam nhuan.", year);

    _getch();
    return 0;
}