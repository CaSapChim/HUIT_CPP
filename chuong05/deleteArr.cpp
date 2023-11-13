#include <stdio.h>
#include <conio.h>

void nhapMang(int arr[], int &n) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
}

void xoaPhanTu(int arr[], int &n, int k) {
    for (int i = k; i < n - 1; i ++) {
        arr[i]= arr[i + 1];
    }
    n--;
}

int main() {
    int a[100], n, x;
    nhapMang(a, n);
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &x);
    xoaPhanTu(a, n, x);
    xuatMang(a, n);
    _getch();
    return 0;
}