#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
     if(n % 2 == 0 || n == 1) {
         printf(" please enter a odd number except 1");
        return ;
    }
    for (int j = 0 ; j < n-1; j++) {
        printf("@\n");
    }
    for (int i = 0; i < (n*2) - 1; i++) {
        if (i < n) {
            if (i == 0) {
                printf("@");
            } else if ( i < n) {
                for (int j = 0 ; j < i + 1; j++) {
                    printf(" ");
                }
            }
            for (int j = 0 ; j < n; j++) {
                printf("*");
            }
            if (i != n - 1) {
                printf("\n");
            } else {
                printf("@");
            }
        } else {
            if ( i >= n) {
                printf("\n");
                for (int k = 0 ; k < (n*2); k++) {
                    printf(" ");
                }
                printf("@");
            }
        }
    }
}

OUTPUT :-
Enter the value of n: 3
@
@
@***
  ***
   ***@
      @
      @
