#include <stdio.h>
int main(){
    int size;
    printf("enter 1 for small 2 for medium 3 for large");
    scanf("%d",&size);
    switch (size)
    {
    case 1:
        printf("small is selected");
        break;
    case 2:
        printf("medium is selected");
        break;    
    case 3:
        printf("large is selected");
        break;

    default:
        printf("invalid option");

        break;
    }

    return 0;
}