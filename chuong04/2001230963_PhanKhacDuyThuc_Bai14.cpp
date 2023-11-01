#include <stdio.h>
#include <conio.h>

void xuat() {
    int count = 0;
    for (int i = 102; i <= 987; i++) {
        int tram = i / 100;
        int chuc = (i / 10) % 10;
        int donvi = i % 10;
        if (tram != chuc && chuc != donvi && donvi != tram) {
            printf("%d\n", i);
        }
    }
}

int main() {
    xuat();
    _getch();
    return 0;
}