#include <stdio.h>
#include <conio.h>

int main() {
    long N;
    printf("Nhap so nguyen N: ");
    scanf("%ld", &N);

    //Tìm chữ số hàng đầu tiên của N
    long chuDauTienN = N;
    while(chuDauTienN >= 10) {
        chuDauTienN /= 10;
    }
    printf("Chu so hang dau tien cua N: %ld\n", chuDauTienN);
    
    //Tổng các chữ số
    long tempN = N;
    long sum = 0;
    long temp;
    while(tempN != 0) {
        temp = tempN % 10;
        sum += temp;
        tempN /= 10;
    }    
    printf("Tong cac chu so la: %ld\n", sum);

    // Chữ số lớn nhất
    tempN = N;
    long tempMaxNum = 0;
    while(tempN != 0) {
        long currentMaxNum = tempN % 10;
        tempN /= 10;
        if (tempMaxNum < currentMaxNum ) tempMaxNum = currentMaxNum;
    }
    printf("Chu so lon nhat la: %ld\n", tempMaxNum);

    //Đếm chữ số của N
    tempN = N;
    int count = 0;
    while(tempN != 0) {
        temp = tempN % 10;
        tempN /= 10;
        count++;
    }
    printf("So chu so cua N la: %d\n", count);

    // N có phải là số có các chữ số khác nhau đôi một ko ?
    count = 0;
    tempN = N;
    while (tempN != 0) {
        temp = tempN % 10;
        long otherTempN = tempN / 10;
        while (otherTempN != 0) {
            if (temp == otherTempN % 10) count++;
            otherTempN /= 10;
        }
        tempN /= 10;
    }

    if (count > 0) {
        printf("N khong phai la so co cac chu so khac nhau doi mot.\n");
    } else {
        printf("N la so co cac chu so khac nhau doi mot\n");
    }

    _getch();
    return 0;
}