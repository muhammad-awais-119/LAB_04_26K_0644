#include<stdio.h>
#include<string.h>
int main(){
    float total_bill;
    char STD_ID[20];
    char choice;
    printf("\nenter total bill ");
    scanf(" %f",&total_bill);
    printf("\ndo you hav student id [Y/N] ? ");
    scanf(" %c",&choice);

    if (choice =='Y')
    {
        printf("enter std_id");
        scanf(" %s",&STD_ID);
    }
    
    
    
    if (choice=='Y')
    {
        printf("%f",total_bill);
        total_bill=total_bill-2.0;
    }

    if (total_bill<0)
    {
        total_bill=0.0;
    }
    printf("\n%f",total_bill);
    
  



    return 0;
}