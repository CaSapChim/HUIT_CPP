#include <stdio.h>
#include <conio.h>

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void connectArr(int a, int b, int arrA[], int arrB[]) {
    int newArr[a + b], index = 0;
    for (int i = 0; i < a; i++) {
        newArr[index] = arrA[i];
        index++;
    }

    for (int i = 0; i < a; i++) {
        newArr[index] = arrB[i];
        index++;
    }

    for (int i = 0; i < a + b; i++) {
        printf("%d ", newArr[i]);
    }
}

int main() {
    int a, b, arrA[100], arrB[100];
    printf("Nhap kich thuoc mang A: ");
    scanf("%d", &a);
    printf("Nhap kich thuoc mang B: ");
    scanf("%d", &b);
    inputArr(arrA, a);
    inputArr(arrB, b);

    printf("New arr: ");
    connectArr(a, b, arrA, arrB);

    _getch();
    return 0;
}