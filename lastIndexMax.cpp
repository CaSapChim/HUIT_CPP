#include <stdio.h>

int findMaxIndex(int a[], int n) {
    int maxIndex = 0;
    for(int i = 0; i < n; i++) {
        if (a[maxIndex] <= a[i])
            maxIndex = i;
    }

    return maxIndex;
}

int check(int *a, int n){
    for (int i = 0; i < n - 1; i++) 
    {
        if((a[i] % 2) == (a[i + 1] % 2))
            return 0;
    }
    return 1;
    
}

int kiemTraDoiXung(int a[], int n) {
    for (int i = 0 ; i < (int)(n / 2); i++) {
        if (a[i] != a[n - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    int a[1] = {1};
    printf("%d", kiemTraDoiXung(a, 1));
    return 0;
}