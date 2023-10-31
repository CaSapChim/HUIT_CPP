#include <stdio.h>
#include <conio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int x;
    printf("nhap x: ");
    scanf("%d", &x);

    if (isPrime(x) == 1)
        printf("%d la so nguyen to", x);
    else 
        printf("%d khong phai la so nguyen to", x);

    _getch();
    return 0;
}