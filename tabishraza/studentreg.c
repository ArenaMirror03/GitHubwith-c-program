#include<stdio.h>
#include <stdio.h>

void getUserDetails(char *firstName, char *lastName, char *address, char *mobileNumber) {
    printf("Enter your first name: ");
    scanf("%s", firstName);    
    printf("Enter your last name: ");
    scanf("%s", lastName); 
    printf("Enter your address: ");
    getchar(); 
    fgets(address,100, stdin);
    printf("Enter your mobile number: ");
    scanf("%c", mobileNumber);
}

int main() {
    char firstName[10];
    char lastName[20];
    char address[50];
    char mobileNumber[10];
    
    getUserDetails(firstName, lastName, address, mobileNumber);
   
    
    return 0;
}