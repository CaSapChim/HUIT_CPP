#include <stdio.h>
#include <string.h>

void nhapChuoi(char s[]) {
    printf("Nhap mot chuoi: ");
    fgets(s, 100, stdin);
    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }
}

int kiemTraDoiXung(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[100];
    nhapChuoi(s);
    if (kiemTraDoiXung(s)) {
        printf("Doi xung\n");
    } else {
        printf("Khong doi xung\n");
    }
    return 0;
}