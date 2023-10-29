#include <stdio.h>
#include <conio.h>

int main() {
    int month;
    printf("Nhap thang: ");
    scanf("%d", &month);

    if (month == 4 || month == 6 || month == 9 || month == 11 ) 
        printf("Thang %d co 30 ngay.", month);
    else if (month == 2) 
        printf("Thang 2 co 28 hoac 29 ngay.");
    else 
        printf("Thang %d co 31 ngay.", month);

    _getch();
    return 0;
}