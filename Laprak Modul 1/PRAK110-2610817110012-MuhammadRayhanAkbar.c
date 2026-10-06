#include <stdio.h>
#include <math.h>

int main(){
    int alas = 5;
    int tinggi = 12;

    int a = tinggi;
    int b = alas;

    int c = sqrt((a * a) + (b * b));

    int keliling = a + b + c;
    int luas = b * a / 2;

    printf("Diketahui :\n");
    printf("Alas = %d\n", b);
    printf("Tinggi = %d\n", a);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d\n", a);
    printf("Sisi B = %d\n", b);
    printf("Sisi C = %d\n", c);
    printf("Keliling = %d\n", keliling);
    printf("Luas = %d\n", luas);
    return 0;
}