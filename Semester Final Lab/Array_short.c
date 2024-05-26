#include <stdio.h>

int main() 
{
    int arr[100];
    int size, i, j, temp;
    FILE *pb;

    pb = fopen("pust.txt", "r");
    fscanf(pb, "%d", &size);

  
    for (i = 0; i < size; i++) {
        fscanf(pb, "%d", &arr[i]);
    }

    fclose(pb);

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
