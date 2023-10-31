#include <stdio.h>
#include <conio.h>
#include <math.h>

bool soNguyen(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main() {    
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int count = 0, i = 2;
    while (count < n) {
        if (soNguyen(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    
    _getch();
    return 0;
}