#include <stdio.h>
#include <conio.h>

int main() {
    int n, tram, chuc, donVi;
    const char *t, *c, *dv;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);

        if (n <= 0 || n >= 1000) 
            printf("So nhap vao khong hop le. Vui long nhap lai.\n");
    } while(n >= 1000 || n <= 0);

    tram = n / 100;
    chuc = (n % 100) / 10;
    donVi = n % 10;

    switch(tram) {
        case 1: t = "mot tram"; break;
        case 2: t = "hai tram"; break;
        case 3: t = "ba tram"; break;
        case 4: t = "bon tram"; break;
        case 5: t = "nam tram"; break;
        case 6: t = "sau tram"; break;
        case 7: t = "bay tram"; break;
        case 8: t = "tam tram"; break;
        case 9: t = "chin tram"; break;
        default: t = "";
    }

    switch(chuc) {
        case 1: c = "muoi"; break;
        case 2: c = "hai muoi"; break;
        case 3: c = "ba muoi"; break;
        case 4: c = "bon muoi"; break;
        case 5: c = "nam muoi"; break;
        case 6: c = "sau muoi"; break;
        case 7: c = "bay muoi"; break;
        case 8: c = "tam muoi"; break;
        case 9: c = "chin muoi"; break;
        default: c = "";
    }

    switch(donVi) {
        case 1: dv = "mot"; break;
        case 2: dv = "hai"; break;
        case 3: dv = "ba"; break;
        case 4: dv = "bon"; break;
        case 5: dv = "nam"; break;
        case 6: dv = "sau"; break;
        case 7: dv = "bay"; break;
        case 8: dv = "tam"; break;
        case 9: dv = "chin"; break;
        default: dv = "";
    }

    printf("So %d doc la: %s %s %s", n, t, c, dv);

    _getch();
    return 0;
}