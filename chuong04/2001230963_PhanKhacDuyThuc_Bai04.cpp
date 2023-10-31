#include <stdio.h>
#include <conio.h>

int soHoanThien(int number) {
    int sumOfDivisors = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sumOfDivisors += i;
        }
    }

    return (sumOfDivisors == number);
}

int main() {
    int number;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("So ban nhap phai la so nguyen duong.\n");
    }

    if (soHoanThien(number)) {
        printf("%d la mot so hoan thien.\n", number);
    } else {
        printf("%d khong phai la so hoan thien.\n", number);
    }

    _getch();
    return 0;
}