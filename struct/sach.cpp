#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Sach {
    char maSach[11];
    char tenSach[51];
    int soTrang;
    float giaBan;
    char tacGia[51];
};

void nhapMangSach(Sach a[], int &n) {
    printf("Nhap phan tu n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin cuon sach thu %d\n", i + 1);

        printf("Nhap ma sach: ");
        rewind(stdin);
        fgets(a[i].maSach, 11, stdin);

        printf("Nhap ten sach: ");
        fgets(a[i].tenSach, 51, stdin);

        printf("Nhap so trang sach: ");
        scanf("%d", &a[i].soTrang);

        printf("Nhap gia cuon sach: ");
        scanf("%f", &a[i].giaBan);

        rewind(stdin);
        printf("Nhap tac gia cuon sach: ");
        fgets(a[i].tacGia, 51, stdin);
        a[i].tacGia[strcspn(a[i].tacGia, "\n")] = '\0';
    }
}

int giaBanMax(Sach a[], int n) {
    float max = a[0].giaBan;
    int cuonSachGiaMax;
    for (int i = 1; i < n; i++) {
        if (a[i].giaBan > max){
            max = a[i].giaBan;
            cuonSachGiaMax = i;
        }
    }
    return cuonSachGiaMax;
}

void xuatMangSach(Sach a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i].giaBan);
    }
}

void sort(Sach a[], int &n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j].giaBan < a[i].giaBan) {
                Sach temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int leLong(Sach a[], int n) {
    char s2[50] = "Le Long";
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].tacGia, s2) == 0)
            count++;
    }   
    return count;
}

int main() {
    Sach arr[100];
    int n;
    nhapMangSach(arr, n);
    sort(arr, n);
    xuatMangSach(arr, n);
    printf("\nLe Long da viet %d cuon sach\n", leLong(arr, n));

    int cuonSachGiaBanMax = giaBanMax(arr, n);
    printf("\nCuon sach co gia ban cao nhat la: ");
    printf("Ten sach %s", arr[cuonSachGiaBanMax].tenSach);
    printf("\nMa sach %s", arr[cuonSachGiaBanMax].maSach);
    printf("\nGia ban sach %d", arr[cuonSachGiaBanMax].giaBan);
    printf("\nSo trang sach %d", arr[cuonSachGiaBanMax].soTrang);
    printf("\nTac gia sach %s", arr[cuonSachGiaBanMax].tacGia);

    _getch();
    return 0;
}