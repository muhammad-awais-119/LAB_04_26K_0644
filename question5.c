#include <stdio.h>
int main(){
  char extra;
    
  printf("enter do you want extra cheese");
  scanf("%c",&extra);
  float currenttotal;
  printf("enter the current total");
  scanf("%f",&currenttotal);
  if (extra=='Y'||extra=='y')

  {
    currenttotal=currenttotal+1.5;
    printf("%f",currenttotal);

  }else if (extra =='N'||extra=='n')
  {
    printf("%f",currenttotal);
  }else
  {
    printf("invalid");
  }
  
  
  
    


    return 0;
}