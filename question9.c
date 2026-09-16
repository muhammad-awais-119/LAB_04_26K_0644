#include<stdio.h>
int main (){
    float total;
    int options;
    printf("enter order total");
    scanf(" %f",&total);
    printf("enter fullfillment options. 1 for pickup, 2 for delivery");
    scanf("%d",&options);
    if (options==1)
    {
        printf("%f",total);
    }
    else
    {
        total=total+3;
        printf("%f",total);
    }
    


    return 0;
}