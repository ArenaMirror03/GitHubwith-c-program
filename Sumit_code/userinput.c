# include<stdio.h>

void userdetails();
char firstname; 
char lastname; 
char address; 
char mobilenumber;



int main(){
    userdetails();
}




void userdetails(){
    printf("Enter your first name: \n ");
    scanf("%s",&firstname);
    printf("Enter your last name: \n ");
    scanf("%s",&lastname);
    printf("Enter your address: \n ");
    scanf("%s",&address);
    printf("Enter your mobile number: \n ");
    scanf("%s",&mobilenumber);
}