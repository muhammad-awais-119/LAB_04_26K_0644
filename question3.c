#include <stdio.h>
int main (){
    int quantity;
    printf("enter the customer\'s desired quantity");
    scanf("%d",&quantity);
    switch (quantity)
    {
    case 1:
        printf("total is 8$ and quantity is 1 pizza");
        break;
    case 2:
        printf("total is 15$ and quantity is 2 pizza");
        break;
    case 3:
        printf("total is 21$ and quantity is 3 pizza");
        break;    
    default:
        break;
    }


    return 0;
}