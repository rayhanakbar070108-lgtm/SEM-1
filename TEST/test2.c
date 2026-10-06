#include <stdio.h>
void main()
{
    //identifikasi variabel, tipe data beserta nilainya
    char nama[20];
    double luas;
    int suhu;
    printf("Sebutkan nama planet: ");
    scanf ("%s",&nama);
    printf("Masukan luas planet %s: ",nama);
    scanf("%d", &luas);
    printf("Masukan suhu planet %s: ",nama);
    scanf("%d",&suhu);

    printf("===============================\n");
    printf("%s adalah salah satu planet di tata surya \n",nama);
    if(suhu>60 || suhu<0){
        printf("%s tidak layak huni \n",nama);
    }else{
        printf("%s layak huni \n",nama);
    }
    printf("%s memiliki luas permukaan sekitar %d km persegi. \n",nama,luas);
    printf("%s suhu di permukaan %s adalah %d derajat celcius. \n",nama,suhu);
}