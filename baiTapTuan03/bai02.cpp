#include <stdio.h>
#include <conio.h>

int main() {
    float donGia;
    int soLuong;
    float thanhTien, giamGia, tongTien;

    printf("Nhap đon gia cua mat hang: ");
    scanf("%f", &donGia);

    printf("Nhap so luong ban của mat hang: ");
    scanf("%d", &soLuong);

    thanhTien = donGia * soLuong;

    if (thanhTien > 100) {
        giamGia = 0.03 * thanhTien;
    } else {
        giamGia = 0;
    }

    tongTien = thanhTien - giamGia;

    printf("Thanh tien: %.2f\n", thanhTien);
    printf("Giam gia: %.2f\n", giamGia);
    printf("Tong tien phai tra: %.2f\n", tongTien);
    
    _getch();
    return 0;
}