#include <stdio.h>

int main() {

    printf("\n");
    printf("=-=-=-= Loops em C =-=-=-=\n");
    printf("\n");

    printf("For Loop:\n");

    // For loop
    for(int x = 0; x < 5; x++) {
        printf("iteracao: %d\n", x);
    }

    printf("\n");
    printf("While Loop:\n");

    // While loop
    int y = 0;
    while(y < 5) {
        printf("Iteracao: %d\n", y);
        y++;
    }


    printf("\n");
    printf("Do-While Loop:\n");

    // Do-While loop
    int z = 0;
    do {
        printf("Iteracao %d\n", z);
        z++;
    } while (z < 5);

    return 0;
}