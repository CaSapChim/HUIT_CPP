#include <stdio.h>
#include <math.h>

int checkOdd(int n) {


    while (n != 0) {
        int b = n % 10;
        if (b % 2 == 0) return 0;
        
        n /= 10;
    }

    return 1;
}

void xuatPhanTu(int a[], int n) {
    for (int i = 0; i < n; i++)
        if (checkOdd(a[i]))
            printf("%d ", a[i]);
                                                                                                                                                                                                                                                                   
}

int main() {    
    int a[6] = {1242, 24, 324, 157, 935, -135};
    xuatPhanTu(a, 6);
    return 0;
}