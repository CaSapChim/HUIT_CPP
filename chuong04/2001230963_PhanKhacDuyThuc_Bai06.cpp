#include <stdio.h>
#include <conio.h>
#include <math.h>

bool soChinhPhuong(int n) {
    float soChinhPhuong = sqrt(n);
    if (soChinhPhuong == (int) sqrt(n)) return true;
}

int main() {
    int count = 0, i = 2, n;
    printf("nhap n: ");
    scanf("%d", &n);

    while (count < n) {
        if (soChinhPhuong(i)) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    _getch();
    return 0;
}