#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, max;
    printf("Nhap vao hai so a va b: ");
    scanf("%f%f", &a, &b);
    max = a > b ? a : b;
    printf("So lon nhat la: %.2f", max);
    
    _getch();
    return 0;
}