#include<stdio.h>
#include<string.h>

int main(){
    char size[30],extra_chs,std_id,stdn_Id[20],fulfillment[20];
    float total,saved;
    int size_opt,qnty_pizz,crst_type,current_t,pickup_opt;
    printf("\nSELECT SIZE OF PIZZA");
    printf("\n1 FOR SMALL 2 FOR MEDIUM 3 FOR LARGE ");
    scanf(" %d",&size_opt);
    switch (size_opt)
    {
    case 1:
        strcpy(size,"SMALL PIZZA");
        printf("size %s selected",size);
        break;
    case 2:
        strcpy(size,"MEDIUM PIZZA");
        printf("size %s selected",size);
        break;    
    case 3:
        strcpy(size,"LARGE PIZZA");
        printf("size %s selected",size);
        break;

    default:
        break;
    }
    printf("\nENTER THE QUANTITY OF PIZZA[only 1 2 3]");
    scanf(" %d",&qnty_pizz);
    switch (qnty_pizz)
    {
    case 1:
        total=8.0;
        saved=0;
        break;
    case 2:
        total=15.0;
        saved=1.0;
        break;
    case 3:
        total=21.0;
        saved=3.0;
        break;        
    
    default:
        break;
    }
    printf("\nENTER THE CRUST TYPE");
    printf("\n1 FOR REGULAR 2 FOR THIN 3 FOR STUFFED ");
    scanf(" %d",&crst_type);
    switch (crst_type)
    {
    case 1:
        total=total+0.0;
        break;
    case 2:
        total=total+1.0;
        break;
    case 3:
        total=total+2.0;
        break;        
    default:
        break;
    }
    printf("\nDO YOU WANT EXTRA CHEESE ? [Y/N]");
    scanf(" %c",&extra_chs);
    if (extra_chs=='Y')
    {
        total=total+1.5;
    }
    printf("\nENTER CURRENT TIME");
    scanf(" %d",&current_t);
    if (current_t>=11 && current_t<=14)
    {
        total=total*0.9;
    }
    printf("\nDTUDENT ID [Y/N]");
    scanf(" %c",&std_id);
    if (std_id=='Y')
    {
        printf("ENTER STUDENT ID");
        scanf(" %s",stdn_Id);
        total=total-2.0;
    }
    
    if (total<0.0)
    {
        total=0.0;
    }
    
    printf("\nFULFILLMENT [1 FOR PICK UP 2 FOR DELIVERY]");
    scanf(" %d",&pickup_opt);
    if (pickup_opt==2)
    {
        total=total+3.0;
    }
    printf("\n====================================================");
    printf("\n                  ORDER RECEIPT                             ");
    printf("\n====================================================");
    printf("\npizza size: %s ",size);
    printf("\nQUANTITY: %d ",qnty_pizz);
    printf("\ncrust: %d",crst_type);
    printf("\nextra cheese: %c",extra_chs);
    printf("\nstudent ID: %s",stdn_Id);
    if (pickup_opt==1)
    {
        strcpy(fulfillment,"pickup");
    }
    else
    {
        strcpy(fulfillment,"delivery");
    }
    printf("\nfulfillment: %s",fulfillment);
    printf("\n====================================================");
    if (qnty_pizz==3 && crst_type==3)
    {
        printf("\nBonus: YOU GET FREE GARLIC BREAD!!");
    }
    printf("Final total %.2f",total);
    printf("\n====================================================");
    printf("\nTHANK YOU FOR DINING WITH US!");
    printf("\nHAVE A SLICE-TASTIC DAY!");
    printf("\n====================================================");


    


    
    
    



    return 0;
}