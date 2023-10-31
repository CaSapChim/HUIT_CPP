#include <stdio.h>
#include <conio.h>

int soTuan(int day) {
    return day / 7;
}

int ngayLe(int day) {
    return day % 7;
}

int main() {
    int n;
    do {
        if (n <=0 ) printf("Khong duoc nhap ngay am.\n");
        printf("Nhap so ngay: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    printf("So tuan: %d\n", soTuan(n));
    printf("So ngay le: %d\n", ngayLe(n));

    _getch();
    return 0;
}