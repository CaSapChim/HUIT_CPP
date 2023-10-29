#include <conio.h>
#include <stdio.h>

int main() {
    int d, r;
    printf("Nhap chieu dai, chieu rong cho hinh chu nhat: ");
    scanf("%d%d", &d, &r);

    for(int i = 0; i < r; i++) {
        for (int j = 0; j < d; j++) {
            printf("* ");
        }
        printf("\n");
    }

    _getch();
    return 0;
}