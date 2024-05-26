#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    long long int id;
};

int main()
{
    struct Student a;
    printf("Name: ");
    scanf("%s",a.name);

    printf("Roll: ");
    scanf("%d",&a.roll);

    printf("ID: ");
    scanf("%lld",&a.id);

    printf("\n Name=%s \n Roll=%d \n ID=%lld",a.name,a.roll,a.id);
    return 0;
}