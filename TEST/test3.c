#include<stdio.h>

int main() {

    int bilangan;
    printf("Masukan angka sembarang: ");
    scanf("%d", &bilangan);
    switch(bilangan)
    {
        case 20:
        printf("bilangan adalah 20");
        break;
    case 21:
    printf("bilangan adalah 21");
    break;
    case 22:
    printf("bilangan adalah 22");
    break;
    default:
    printf("bilangan bukan 20, 21, 22");
    }
    return 0;
}