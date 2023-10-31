#include <stdio.h>
#include <conio.h>

int soGio(int giay) {
    return giay / 3600;
}

int soPhut(int giay) {
    return (giay - 3600) / 60;
}

int soGiay(int giay) {
    return (giay - 3600) - 60 * soPhut(giay);
}

int main() {
    int giay;
    printf("Nhap so giay: ");
    scanf("%d", &giay);

    printf("Dang h:m:s la %dh:%dm:%ds", soGio(giay), soPhut(giay), soGiay(giay));
    _getch();
    return 0;
}