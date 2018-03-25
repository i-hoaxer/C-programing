#include<stdio.h>
void main()
{
    float Consumption,Chargeprice,Tax,TotalPrice,MorePrice;
    int Type;
    
    printf("Enter Consumption in cubic meter : ");
    scanf("%f",&Consumption);
    printf("Enter Type : If Residential enter '8' If Commercial Enter '9' ");
    scanf("%d",&Type);
    printf("----------------------------------------------------\n");
    
    if (Consumption >= 1.00 && Consumption <= 33.99)
    {
        Chargeprice = 7;
    }else if (Consumption >= 34.00 && Consumption <= 49.99)
    {
        Chargeprice = 13;
    }else if (Consumption >= 50.00 )
    {
        Chargeprice = 22;
        
    }else{
        printf("Erroe");
    }
    
    
    switch (Type) {
        case 8:
            Tax = (Chargeprice) * (0.065);
            TotalPrice = Chargeprice + Tax;
            printf("Total Consumption  : %.4f cubic meter \n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("Total Praice       : %.4f OMR\n",TotalPrice);
            printf("----------------------------------------------------\n");
            if (Chargeprice > 30) {
                TotalPrice = Chargeprice + Tax + MorePrice + 3.500;
            }
            break;
        case 9:
            MorePrice = Chargeprice * 0.11;
            Tax = Chargeprice * 0.065;
            TotalPrice = Chargeprice + Tax + MorePrice;
            printf("Total Consumption  : %.4f cubic meter\n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("More priace        : %.4f OMR \n",MorePrice);
            printf("Total Praice       : %.4f OMR \n",TotalPrice);
            printf("----------------------------------------------------\n");
            if (Chargeprice > 30) {
                TotalPrice = Chargeprice + Tax + MorePrice + 3.500;
            }
            break;
        default:
            
            printf("erorr Type!\nplees inter corect type of Consumption \n");
            break;
    }
    
    
}
