#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int x;
    printf("Nhap x = ");
    scanf("%d", &x);
    int Fx = 5 * pow(x, 2) + 6 * x + 1;
    int Gx = 2 * pow(x, 4) - 5 * pow(x, 2) + 4 * x + 1; 

    printf("F(x) = %d\n", Fx);
    printf("G(x) = %d", Gx);
    _getch();
    return 0;   
}