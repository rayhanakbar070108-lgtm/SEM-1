#include <stdio.h>

int main(){
    int a = 4;
    int b = 5;
    int c = 7;
    int harga_tanah_per_meter = 85000;

    int keliling = a + b + c;
    int total_biaya = keliling * harga_tanah_per_meter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
    printf("Keliling tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_tanah_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);
    return 0;
} 