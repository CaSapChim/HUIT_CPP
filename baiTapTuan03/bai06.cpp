#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, choice;

    printf("Nhap hai so a va b: "); 
    scanf("%d%d", &a, &b);

    printf("Lua chon phep toan\n");
    printf("[1]: Cong\n");
    printf("[2]: Tru\n");
    printf("[3]: Nhan\n");
    printf("[4]: Chia\n");
    printf("Moi ban nhap so: ");
    scanf("%d", &choice);

    printf("Ket qua la: ");
    switch (choice) {
        case 1: printf("%d", a + b); break;
        case 2: printf("%d", a - b); break;
        case 3: printf("%d", a * b); break;
        case 4: printf("%f.2", float(a / b)); break;
        default: printf("Ban nhap so sai, vui long nhap lai");
    }

    _getch();
    return 0;
}