#include<stdio.h>
int main(){
    int qnty,type;
    printf("\nenter the quantity of pizza");
    scanf(" %d",&qnty);
    printf("\nenter the type of crust ");
    scanf(" %d",&type);
    if (qnty==3 && type==3)
    {
        printf("\nyou qualify for free side dish");
        printf("\nyou get free garlic bread");
    }
    else
    {
        printf("\nthank you for your order");
    }
    
    


    return 0;
}