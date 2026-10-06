#include <stdio.h>

int main() {
    char name[3];
    int age;

    printf("waht's your name? ");
    scanf("%s", name);

    printf("how old are you? ");
    scanf("%d", &age);

    printf("Hello %s, You'll turn %d next year!\n", name, age +1);
    return 0;
}