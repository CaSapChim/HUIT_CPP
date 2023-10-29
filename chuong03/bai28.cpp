#include <stdio.h>
#include <conio.h>

int main() {
    int thoiGianVao, thoiGianRa;
    int tongTien = 0;

    printf("Nhap thoi gian khach vao: ");
    scanf("%d", &thoiGianVao);
    printf("Nhap thoi gian khach ra: ");
    scanf("%d", &thoiGianRa);

    if (thoiGianVao >= 10 && thoiGianRa <= 24) {
        if (thoiGianVao >= 10 && thoiGianVao < 17) {
            if (thoiGianRa >= 10 && thoiGianRa < 17) 
                tongTien += (thoiGianRa - thoiGianVao) * 20000;
            else 
                tongTien += (17 - thoiGianVao) * 20000;                
        }
        
        if (thoiGianRa > 17 && thoiGianRa <= 24) {
            if (thoiGianVao > 17 && thoiGianRa <= 24)
                tongTien += (thoiGianRa - thoiGianVao) * 45000;
            else
                tongTien += (thoiGianRa - 17) * 45000;
        }
        

        printf("Tong tien khach phai tra la: %d", tongTien);
    } else {
        printf("Chua mo cua ai cho vao");
    }

    _getch();
    return 0;
}