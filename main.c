#include <stdio.h>
 /*
  This program takes values for b and c and factors
  that add to b and multiply to c
 */

int factor(int);

int main(int argc, const char * argv[]) {
    int b;
    int c;
    printf("This is the Formula: \n");
    printf("ax^2 + bx + c\n");
    
    printf("Enter a number for b: ");
    scanf("%d", &b);
    
    printf("ax^2 + %dx + c\n", b);
    
    printf("Enter a number for c: ");
    scanf("%d", &c);
    
    printf("ax^2 + %dx + %d\n", b, c);
    
    factor(b); // Gives the factors of B or C
    factor(c); // Gives the factors of the other number
    
    
    return 0;
    }

int factor(int) {
    int i, c, b;
    printf("\nEnter a positive integer: ");
    scanf("%d", &c);
    printf("Factors of %d are: \n", c);
    for (i = 1; i <= c; ++i) {
        if (c % i == 0) {
            printf("%d ", i);
        }
    }
    return i;
}


