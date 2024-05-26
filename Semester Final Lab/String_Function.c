#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    
    
    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("Length of string a: %d\n", len_a);
    printf("Length of string b: %d\n", len_b);
    
    int v = strcmp(a, b);
    if (v < 0) {
        printf("A is smaller\n");
    } else if (v > 0) {
        printf("B is smaller\n");
    } else {
        printf("Same\n");
    }
    
    strcpy(b, a);
    printf("%s\n", b);

   
    return 0;
}
