#include<stdio.h>
int main(){
int amountofpizzas;
int price;
printf("enter the amount of pizza");
scanf("%d",&amountofpizzas);
if (amountofpizzas>1)
{
    printf("checkout our promotional deals");

}else
{
    price=8;
    printf("your price is %d",price);

}

    return 0;
}