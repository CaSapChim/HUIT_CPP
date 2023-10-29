#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2;
    printf("Nhap a, b, va c: ");
    scanf("%f %f %f", &a, &b, &c);

    float delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) 
                printf("Phuong trinh vo so nghiem.\n");
            else 
                printf("Phuong trinh vo nghiem.\n");
        } else {
            x1 = -c / b;
            printf("Nghiem duy nhat x = %.2f\n", x1);
        }
    } else {
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            
            printf("Phuong trinh co hai nghiem thuc phan biet:\n");
            printf("Nghiem 1 = %.2f\n", x1);
            printf("Nghiem 2 = %.2f\n", x2);

        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh có nghiem kép:\n");
            printf("Nghiem kep = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem");
        }  
    }


    _getch();
    return 0;
}