#include <stdio.h>
int main(){
    int nilai;
    printf("Silahkan masukkan nilai: ");
    scanf("%d", &nilai);
    switch (nilai)
    {
        case 80 ... 100:
        printf("A");
        break;
        
        case 70 ... 79:
        printf("B");
        break;

        case 60 ... 69:
        printf("C");
        break;

        case 50 ... 59:
        printf("D");
        break;

        default:
        printf("E");
        break;
    }
}