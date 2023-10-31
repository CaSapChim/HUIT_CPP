#include <conio.h>
#include <stdio.h>

int Dem_UocSo(int N)
{
    int dem = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            dem++;
    }

    return dem;
}

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int dem = Dem_UocSo(N);
    printf("so nguyen %d co %d uoc", N, dem);

    _getch();
    return 0;
}