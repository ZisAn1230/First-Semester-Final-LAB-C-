#include <stdio.h>
int main() 
{
    int num, fact = 1;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}
