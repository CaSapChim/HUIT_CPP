#include <stdio.h>
#include <conio.h>

int main() {
    int a, b;
    printf("Nhap vao 2 so nguyen a va b: ");
    scanf("%d%d", &a, &b);
    
    if (a > b) 
        printf("a lon hon b");
    else if (a < b)
        printf("a be hon b");
    else 
        printf("a bang b");

    _getch();
    return 0;
}