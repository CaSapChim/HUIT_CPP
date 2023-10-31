#include <stdio.h>
#include <conio.h>

int maxN(int m) {
    int n = 1;
    int sum = 0;

    while (sum + n <= m) {
        sum += n;
        n++;
    }
    return n;
}

int main() {
    int m;
    printf("Nhap m = ");
    scanf("%d", &m);

    printf("So n lon nhat la: %d", maxN(m) - 1);

    _getch();
    return 0;
}