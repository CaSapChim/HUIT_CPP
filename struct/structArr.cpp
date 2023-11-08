/*
    Ví dụ 1: Cho 1 mảng sinh viên. Viết hàm tìm tất cả sinh
    viên có số lần vắng mặt trên lớp nhỏ hơn 3.
    Phân tích bài toán:
    - Tạo kiểu dữ liệu sinh viên.
    - Viết hàm nhập dữ liệu mảng sinh viên.
    - Viết hàm xuất mảng sinh viên đó.
    - Viết hàm tìm tất cả sinh viên có số lần vắng mặt trên
    lớp nhỏ hơn 3.
*/

#include<stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char hoTen[50];
    int soLanVang;
};

void nhap(SinhVien a[], int &n){
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d\n", i+1);
        printf("Nhap mssv: ");
        rewind(stdin);
        fgets(a[i].mssv, 51, stdin);
        printf("Nhap ho ten: ");
        fgets(a[i].hoTen, 51, stdin);
        rewind(stdin);
        printf("Nhap so lan vang: ");
        scanf("%d", &a[i].soLanVang);
        printf("\n");
    }
}

void xuat(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Thong tin sinh vien thu %d\n", i+1);
        printf("mssv: %s", a[i].mssv);
        printf("Ho ten: %s", a[i].hoTen);
        printf("So lan vang: %d\n\n", a[i].soLanVang);
    }
}

void soLanVangBeHonBa(SinhVien a[], int n) {
    printf("Ho ten hoc sinh co so lan vang be hon 3: ");
    for (int i = 0; i < n; i++) {
        if (a[i].soLanVang < 3) 
            printf("%s", a[i].hoTen);
    }
}

int main() {
    SinhVien x[100];
    int n;
    nhap(x, n);
    xuat(x, n);
    soLanVangBeHonBa(x ,n);
    return 0;
}