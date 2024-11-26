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
    for (int i = 1; i <= n / 2; i++) {
        printf(" ");
        for (int k = 1; k<= n - 1; k++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {

            printf("*");
       
        }
        for (int k = 1; k<= n - 1; k++) {
            printf(" ");
        }
        printf(" ");
        printf("\n");
    }

    // Lower part of the pattern
    for (int i = n / 2 + 1; i >= 1; i--) {
        if (i == n / 2 + 1) { printf("e");
            for (int k = 1; k<= n - 1; k++) {
            printf("e");
        }
        } else { printf("e");
            for (int k = 1; k<= n - 1; k++) {
            if (k == 1) {
                printf(" ");
            } else {
                printf(" ");
            }
        }
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        if (i != n / 2 + 1) {
            for (int j = n / 2 - 1; j >= i ; j--) {
                printf(" ");
            }
        }
        if (i == n / 2 + 1) {
            for (int k = 1; k<= n - 1; k++) {
            printf("e");
        } printf("e");
        } else {
            for (int k = 1; k<= n; k++) {
            if (k == n) {
                printf(" ");
            } else {
                printf(" ");
            }
        } printf("e");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= (n / 2) + 1; i++) {
        for (int j = 1; j <= (n * 2) + ((n / 2) + 1); j++) {
            if (j == 1 || j == (n * 2) + ((n / 2) + 1)) {
                printf("e");
            } else {
                printf(" ");
            }
            }
            printf("\n");
    }

    return 0;
}
//
OUTPUT:-
Enter the value of n: 5
     *     
     **     
eeeee***eeeee
e    **     e
e    *      e
e           e
e           e
e           e

Enter the value of n: 3
   *   
eee**eee
e  *   e
e      e
e      e
