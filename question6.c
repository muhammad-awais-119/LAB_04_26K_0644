#include<stdio.h>
int main (){
    float current_total_bill,current_time;
    printf("\nenter current total bill");
    scanf(" %f",&current_total_bill);
    printf("\nenter current time in 24 hrs");
    scanf(" %f",&current_time);
    if (current_time>=11.0 && current_time<=14.0)
    {
        current_total_bill=current_total_bill*0.9;
        printf(" %.1f",current_total_bill);
    }
    else
    {
        printf("%.1f",current_total_bill);
    }
    
    


    return 0;
}