#include <stdio.h>



void quickSort(int a[], int Left, int Right) {
    if (Left >= Right) return;
    
    int i = Left, j = Right, mid = (Left + Right) / 2;
    int x = a[mid];

    do {
        while (a[i] < x) i++;
        while (a[j] > x) j--;

        if (i <= j) {
            if (i < j)
                swap(a[i], a[j]);
            i++;
            j--;
        }   
    } while( i <= j);
    quickSort(a, Left, j);
    quickSort(a, i, Right);
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a[8] = {1, 5, 2, 8, 3, 63, 22, 12};

    printf("Truoc khi sort: ");
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);

    quickSort(a, 0, 7);

    printf("\nSau khi sort: ");
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    return 1;
}