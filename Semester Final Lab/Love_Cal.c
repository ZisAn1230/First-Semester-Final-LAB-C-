#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sumOfDigits(int num) 
{
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main() 
{
    char yourName[40], partnerName[40];
    int sumYourName = 0, sumPartnerName = 0;
    float percentage;

    printf("Enter your name: ");
    fgets(yourName, sizeof(yourName), stdin);
    yourName[strcspn(yourName, "\n")] = '\0'; 

    printf("Enter your partner's name: ");
    fgets(partnerName, sizeof(partnerName), stdin);
    partnerName[strcspn(partnerName, "\n")] = '\0'; 


    for (int i = 0; yourName[i] != '\0'; i++) 
    {
        sumYourName += tolower(yourName[i]);
    }
    for (int i = 0; partnerName[i] != '\0'; i++) 
    {
        sumPartnerName += tolower(partnerName[i]);
    }
    
    percentage = (sumOfDigits(sumYourName) + sumOfDigits(sumPartnerName)) + 40;
    if (percentage > 100)
        percentage = 100;

    printf("Your love percentage is: %.2f\n\n", percentage);
    return 0;
}
