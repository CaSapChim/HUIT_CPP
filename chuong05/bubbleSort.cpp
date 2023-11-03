// Sắp xếp mảng có phần tử tăng dần

#include <stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
}

void outputArr(int arr[], int n) {
    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100], n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    inputArr(arr, n);
    bubbleSort(arr, n);
    outputArr(arr, n);

    _getch();
    return 0;
}