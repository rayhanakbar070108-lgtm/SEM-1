#include <stdio.h>
int main(){
    int putaran = 5;
    int jarak = 14;
    float phi = 3.14;

    float keliling = (float)jarak / putaran; 
    float jari_jari = keliling / (2 * phi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d\n", putaran);
    printf("Putaran jarak tempuh Pak Dengklek = %d kilometer\n", jarak);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek Adalah %.2f kilometer\n", jari_jari);
return 0;
}