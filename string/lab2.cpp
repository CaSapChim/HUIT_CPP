#include <stdio.h>
#include <string.h>

void findStr(char s[], char s1[]) {
    if (strstr(s, s1) != NULL) 
        printf("Tim thay");
    else 
        printf("Khong tim thay");
}

int main() {
    char s[50];
    char s1[50];
    printf("Nhap mot chuoi: ");
    fgets(s, 50, stdin);
    rewind(stdin);
    printf("Nhap mot tu muon tim: ");
    fgets(s1, 50, stdin);

    findStr(s, s1);
    return 0;
}