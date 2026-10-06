#include <stdio.h>
#include <string.h>

void cetak_baris_tengah(char *teks, int lebar_total) {
    int lebar_dalam = lebar_total -2;
    int panjang_teks = strlen(teks);
    int spasi_kiri = (lebar_dalam - panjang_teks) /2;
    int spasi_kanan = lebar_dalam - panjang_teks - spasi_kiri;

    printf("#");
    for (int i = 0; i < spasi_kiri; i++) {
        printf(" ");
    }
    printf("%s", teks);
    for (int i = 0; i < spasi_kanan; i++) {
        printf(" ");
    }
    printf("#\n");
}

int main() {
    int lebar_total= 34;

    for (int i = 0; i < lebar_total; i++)printf("#");
    printf("\n");

    cetak_baris_tengah(" ", lebar_total);
    cetak_baris_tengah("Muhammad Rayhan Akbar", lebar_total);
    cetak_baris_tengah("2610817110012", lebar_total);
    cetak_baris_tengah("Manusia Ter Di TI 26", lebar_total);
    cetak_baris_tengah(" ", lebar_total);

    for (int i = 0; i < lebar_total; i++)printf("#");
    printf("\n");

    return 0;
}