#include <conio.h>
#include <stdio.h>

int main() {
    int n;
    int a = 0,  sum = 0;

	printf("Nhap vao n: ");
	scanf("%d", &n);

	for ( int i = 1; i <= n; i++) {
		a = a + i;
		sum = sum + a;
    }

	printf("Ket qua: %d", sum);

    _getch();
    return 0;
}