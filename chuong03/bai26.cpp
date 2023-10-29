#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so la boi so cua 5 nho hon %d la:\n", n);

    for (int i = 5; i < n; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
    
    _getch();
    return 0;
}