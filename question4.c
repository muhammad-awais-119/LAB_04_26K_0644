#include <stdio.h>
int main (){
    int total;
    int type;
    printf("enter current total");
    scanf("%d",total);
    printf("enter crust type");
    scanf("%d",type);
    switch (type)
    {
    case 1:
        total=total+0;
        printf("new total is %d",total);
        break;
    case 2:
       total=total+1;
       printf("new total is %d",total);
       break;
    case 3:
        total=total+2;
        printf("new total is %d",total);
        break;
    default:
        break;
    }


    return 0;

}