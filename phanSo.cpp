#include <stdio.h>

struct PhanSo {
    int tuSo;
    int mauSo;
};

// void nhapPhanSo(PhanSo phanSo[], int n) {
//     printf("Nhap so luong cua mang: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("%d")
//         printf("Nhap tu so: ")
//     }
// }

PhanSo tinhTongPhanSo(PhanSo phanSoA, PhanSo phanSoB) {
    PhanSo KetQua;
    int mauSoChung = phanSoA.mauSo * phanSoB.mauSo;
    int tongTuSo = phanSoA.tuSo * phanSoB.mauSo + phanSoB.tuSo * phanSoA.mauSo;

    KetQua.tuSo = tongTuSo;
    KetQua.mauSo = mauSoChung;

    return KetQua;
}

void swap(PhanSo &a, PhanSo &b) {
    PhanSo tmp = a;
    a = b;
    b = tmp;
}

void SortPhanSo(PhanSo phanSo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((float)phanSo[i].tuSo / phanSo[i].mauSo > (float)phanSo[j].tuSo / phanSo[j].mauSo)
                swap(phanSo[i], phanSo[j]);
        }
    }
}

int main() {
    PhanSo phanSo[3] = {
        {8, 6},
        {1, 2}, 
        {5, 4}, 
    };

    SortPhanSo(phanSo, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d/%d ", phanSo[i].tuSo, phanSo[i].mauSo);
    }
    
    return 1;
}