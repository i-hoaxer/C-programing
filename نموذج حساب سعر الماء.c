#include<stdio.h>
void main()
{
    float Consumption,Chargeprice,Tax,TotalPrice,MorePrice;
    int Type;
    
    printf("Enter Consumption in cubic meter : ");
    scanf("%f",&Consumption);
    printf("Enter Type : If Residential enter '1' If Commercial Enter '2' ");
    scanf("%d",&Type);
    printf("----------------------------------------------------\n");
    
    if (Consumption >= 6 && Consumption <= 10.99)
    {
        Chargeprice = 2;
    }else if (Consumption >= 11 && Consumption <= 17.99)
    {
        Chargeprice = 3;
    }else if (Consumption >= 18.00 )
    {
        Chargeprice = 4;
        
    }else{
        printf("Erroe");
    }
    
    
    switch (Type) {
        case 1:
            Tax = (Chargeprice) * (0.04);
            TotalPrice = Chargeprice + Tax;
            printf("Total Consumption  : %.4f cubic meter \n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("Total Praice       : %.4f OMR\n",TotalPrice);
            printf("----------------------------------------------------\n");
            break;
        case 2:
            MorePrice = Chargeprice * 0.07;
            Tax = Chargeprice * 0.04;
            TotalPrice = Chargeprice + Tax + MorePrice;
            printf("Total Consumption  : %.4f cubic meter\n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("More priace        : %.4f OMR \n",MorePrice);
            printf("Total Praice       : %.4f OMR \n",TotalPrice);
            printf("----------------------------------------------------\n");
            break;
        default:
            
            printf("erorr Type!\nplees inter corect type of Consumption \n");
            break;
    }
    
    
}

