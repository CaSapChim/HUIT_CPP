#include <string.h>
#include <stdio.h>

int main() {
    char name[50] = "\0";
    char fname[50] = "\0";

    printf("Nhap ho ten: ");
    fgets(name, 50, stdin);

    int count = 0, j = 0;
    for (int i = 0; i < strlen(name); i++) {
        if(name[i] == ' ')
            count++;
        if (count == 0)
            fname[j++] = name[i];
    }    
    printf("ten dau tien: %s", fname);

    return 0;
}