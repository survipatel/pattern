#include <stdio.h>

int main() {
    int n;

    // Reading input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
     if(n % 2 == 0 || n != 1){

    // Upper part of the pattern
    for (int i = 0; i < n; i++) {
        printf("@");
        for (int j = 0; j < i * (n - 1); j++)
            printf(" ");
        for (int j = 0; j < n; j++)
            printf("*");
        if (i == n - 1)
            printf("@");
        printf("\n");
    }

    // Middle part of the pattern
    printf("@");
    for (int i = 0; i < ((n - 1) * (n - 1)) + n; i++)
        printf(" ");
    printf("@\n");

    // Lower part of the pattern
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < ((n - 1) * (n - 1)) + n + 1; j++)
            printf(" ");
        printf("@\n");
    }
}else{
    printf(" Please Enter a even number");
    return 0;
}

    return 0;
}



//
OUTPUT-
Enter the value of n: 4
@****
@   ****
@      ****
@         ****@
@             @
              @
              @
              @
                                                   Enter the value of n: 2
                                                   @**
                                                   @ **@
                                                   @   @
                                                       @

