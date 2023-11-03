#include <stdio.h>
#include <conio.h>

void insertToArr(int arr[100], int &n, int item, int index) {
    if (index < 0) index = 0;
    if (index > n) index = n;

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = item;
    n++;
}

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void outputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100], n, item, index;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    inputArr(arr, n);
    printf("Nhap phan tu va vi tri muon chen vao mang: ");
    scanf("%d%d", &item, &index); 
    insertToArr(arr, n, item, index); 
    printf("Ket qua: ");
    outputArr(arr, n);
    _getch();
    return 0;
}