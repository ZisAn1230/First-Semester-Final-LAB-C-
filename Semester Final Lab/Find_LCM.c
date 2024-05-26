#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

    int lcm = (num1 * num2) / gcd;

    printf("The least common multiple of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
