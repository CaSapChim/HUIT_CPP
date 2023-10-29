#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int x;
    printf("Nhap x = ");
    scanf("%d", &x);
    int Fx = (1 + x) / (1 - x);
    float Gx = (3 * pow(x, 5) + 2 * x + sqrt(x + 1)) / (5 * pow(x, 2) - 3);
    printf("F(x) = %d\n", Fx);
    printf("G(x) = %.2f", Gx);
    return 0;
}