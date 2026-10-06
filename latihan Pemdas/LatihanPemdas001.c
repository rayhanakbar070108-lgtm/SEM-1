#include <stdio.h>
int main() {

    int nilai;
    printf("Masukkan Nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Nilai Kamu Adalah A\n");
    }
    else if (nilai >= 70) {
        printf("Nilai Kamu Adalah B\n");
    }
    else if (nilai >= 60) {
        printf("Nilai Kamu Adalah C\n");
    }
    else if (nilai >= 50) {
        printf("Nilai Kamu Adalah D\n");
    }
    else {
        printf("Nilai Kamu Adalah E\n");
}
}