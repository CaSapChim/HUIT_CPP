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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void outputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;   
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1; 
    }
    return 0;
}

int main() {
    int arr[100], n, x;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    inputArr(arr, n);
    printf("Mang sau khi sap xep: ");
    bubbleSort(arr, n);
    outputArr(arr, n);
    printf("\nNhap so can tim: ");
    scanf("%d", &x);

    int xamlul = binarySearch(arr, n, x);
    if (xamlul == 0)
        printf("Khong tim thay so %d", x);
    else
        printf("Tim thay %d o vi tri thu %d", x, xamlul);

    _getch();
    return 0;
}