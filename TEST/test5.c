#include <stdio.h>
void main()
{
    //identifikasi variabel, tipe data beserta nilainya
    char nama[]="Bumi";
    double luas=5101000000;//agar bisa menampung nilai yg besar gunakan tipe data double
    unsigned int suhu=35;//dengan mengubah tipe data "unsigned" nilai tidak bisa jadi negatif

    printf("%s adalah planet ke-3 di tata surya.\n",nama);
    printf("Luas permukaan %s sekitar %.0lf km persegi.\n",nama,luas);
    printf("Suhu di permukaan %s adalah %u derajat celcius.\n",nama,suhu);
}