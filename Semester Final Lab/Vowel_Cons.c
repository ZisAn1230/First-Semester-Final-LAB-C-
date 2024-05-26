#include <stdio.h>
int main() 
{
    char str[1000];
    int vowels = 0, consonants = 0;

    // Read a line of input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate over each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if the character is an alphabet letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
