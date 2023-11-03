#include <stdio.h>
#include <conio.h>

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int arr[], int n) {
    printf("Xuat mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100], n;
    printf("Nhap phan tu cua mang: ");
    scanf("%d", &n);
    nhapMang(arr, n);
    xuatMang(arr, n);
    _getch();
    return 0;
}