#include <stdio.h>

void main() {
    int n;
    // Reading input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
     if(n % 2 == 0 || n == 1){
         printf(" please enter a odd number except 1");
        return ;
    }
    // Upper part of the pattern
    for (int i = 0; i < n - 1; i++) {
        for (int j = n * 3; j > 0; j--) {
            if(j == 1){
                printf("e");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
        for (int i = 0; i < n; i++) {
             for (int j = 0; j < n; j++){
                 if(i == n - 1){
                     printf("e");
                 }else{
                     printf(" ");
                 }
             }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
         for (int j = 0; j < n; j++) {
             if(i == 0){
                  printf("e");
             }else{
                 printf(" ");
             }
         }
       
        printf("\n");
    }

    // Lower part of the pattern
    for (int i = 0; i < n - 1; i++) {
            printf("e\n");
        }
    return ;
}

OUTPUT:-
Enter the value of n: 3
        e
        e
   ***eee
   ***   
eee***   
e
e