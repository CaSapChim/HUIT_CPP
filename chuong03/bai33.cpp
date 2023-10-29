#include <stdio.h>
#include <conio.h>

int main() {
    int tram, chuc, donVi;
    printf("Cac so co 3 chu so doi mot khac nhau la: ");

    for (int i = 100; i < 1000; i++) {
        tram = i / 100;
        chuc = (i % 100) / 10;
        donVi = i % 10;
        if (tram != chuc && chuc != donVi & donVi != tram) printf("%d ", i);
    }

    _getch();
    return 0;
}