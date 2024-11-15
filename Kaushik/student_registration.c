#include<stdio.h>

void student_registration();

int main()
{
    
    student_registration();

    return 0;
}


void student_registration()
{
    char firstname[50];
    char lastname[50];
    char address[50];
    int mobile_number[10];
    
    printf("Enter your first name : ");
    scanf("%s",&firstname);
    
    printf("Enter your last name : ");
    scanf("%s",&lastname);

    printf("Enter your Address : ");
    scanf("%s",&address);

    printf("Enter your mobile number : ");
    scanf("%s",&mobile_number);

    printf("\nFirst name is : %s",firstname);
    printf("\nlast name is : %s",lastname);
    printf("\nAddress is : %s",address);
    printf("\nMobile number is : %s",mobile_number);
}