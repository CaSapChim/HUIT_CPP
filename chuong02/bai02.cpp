#include <stdio.h>
#include <conio.h>

int main() {
    float doC, doF;
    printf("Nhap nhiet do F: ");
    scanf("%f", &doF);
    doC = (doF - 32) / 1.8;
    printf("Nhiet do F => do C: %.2f", doC);
    _getch();
    return 0;   
}