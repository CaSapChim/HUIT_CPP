#include <stdio.h>
#include <string.h>

struct SinhVien {
    int age;
    char name[51];
    int soLanVang;
};

int main() {
    SinhVien x;
    printf("Nhap ho ten: ");
    fgets(x.name, 51, stdin);
    rewind(stdin);
    printf("Nhap so tuoi: ");
    scanf("%d", &x.age);
    printf("Nhap so lan vang mat: ");
    scanf("%d", &x.soLanVang);

    printf("Ho ten: %s", x.name);
    printf("So tuoi: %d\n", x.age);
    printf("So lan vang: %d", x.soLanVang);
    return 0;
}