#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    printf("Nhap vao mot so tu 1 toi 9: "); scanf("%d", &a);
    switch (a) {
        case 0: printf("So khong"); break;
        case 1: printf("So mot"); break;
        case 2: printf("So hai"); break;
        case 3: printf("So ba"); break;
        case 4: printf("So bon"); break; 
        case 5: printf("So nam"); break;
        case 6: printf("So sau"); break; 
        case 7: printf("So bay"); break;
        case 8: printf("So tam"); break;
        case 9: printf("So chin"); break;
    }
    _getch();
    return 0;
}