#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n % 2 == 0 || n == 1) {
         printf(" please enter a odd number except 1");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i < n / 2 && j <= i) || (i > n / 2 && j < n - i) || i == n / 2)
                printf("*");
            else
                printf(" ");
        }
        if (i == n / 2 - 1 || i == n / 2 + 1)
            printf(" *");

        if (i == n / 2)
            printf("***");

        printf("\n");
    }
    return 0;
}

//OUTPUT -  
Enter the value of n: 7
*      
**     
***     *
**********
***     *
**     
* 
