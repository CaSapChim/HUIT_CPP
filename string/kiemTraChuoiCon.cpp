#include <stdio.h>
#include <conio.h>
#include <string.h>

int kiemTraChuoiCon(char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int j = 0;

    for (int i = 0; i <= len1 - len2; i++) {
        if (s1[i] == s2[0]) {
            for (j = 1; j < len2; j++) {
                if (s1[i + j] != s2[j]) 
                    break;
            }
            if (j == len2) 
                return 1;
        }
    }
    return 0;
}

int main() {
    char s1[50], s2[50];
    printf("Nhap chuoi dau tien: ");
    fgets(s1, 50, stdin);
    printf("Nhap chuoi thu hai: ");
    fgets(s2, 50, stdin);

    int kq = kiemTraChuoiCon(s1, s2);
    if (kq == 1) 
        printf("Co");
    else    
        printf("Khong");

    _getch();
    return 0;
}