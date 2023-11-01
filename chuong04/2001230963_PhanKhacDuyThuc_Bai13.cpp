#include <stdio.h>
#include <conio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i* i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap n: ");
    scanf("%d", &n);
    
    printf("%d so nguyen to cung nhau voi %d la:\n", m, n);

    int count = 0;
    int num = 2; // Bắt đầu kiểm tra từ số 2 trở đi

    while (count < m) {
        if (isPrime(num) && UCLN(num, n) == 1) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    _getch();
    return 0;
}