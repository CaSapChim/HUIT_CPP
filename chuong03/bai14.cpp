#include <stdio.h>
#include <conio.h>

int main() {
    int sum = 0;
    for (int i = 1; i < 21; i++) {
        sum += i;
    }
    printf("Tong tu 1 den 20 la: %d", sum);

    _getch();
    return 0;
}