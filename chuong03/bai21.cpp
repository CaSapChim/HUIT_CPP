#include <stdio.h>
#include <conio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }
    _getch();
    return 0;
}