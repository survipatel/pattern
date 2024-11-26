#include <stdio.h>

int main() {
    int n;
    // Reading input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
     if(n % 2 == 0 || n == 1) {
         printf(" please enter a odd number except 1");
        return 0;
    }
    // Upper part of the pattern
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n + 2; j++)
            printf(" ");
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j < (2 * i) + 1; j++)
            printf("*");
        printf("\n");
    }

    // Middle part of the pattern
    for (int i = 0; i < n + 2; i++)
        printf("@");
    for (int i = 0; i < (2 * n) - 1; i++)
        printf("*");
    printf("\n");

    // Lower part of the pattern
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n + 2; j++)
            printf(" ");
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j < (2 * i) + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
//
OUTPUT:-
Enter the value of n: 5                                          Enter the value of n: 3
                                                                               *
                                                                              ***
                                                                        @@@@@*****
                                                                              ***
                                                                               *                    

           *                                  
          ***
         *****
        *******
@@@@@@@*********
        *******
         *****
          ***
           *