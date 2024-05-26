#include <stdio.h>

int main() 
{
    int arr[100];
    int i, n, sum = 0;
    FILE *inputFile;

   
    inputFile = fopen("input.txt", "r");
  
    fscanf(inputFile, "%d", &n);
    for (i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &arr[i]);
    }

    fclose(inputFile);

    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    printf("Sum of all elements of array = %d\n", sum);

    return 0;
}
