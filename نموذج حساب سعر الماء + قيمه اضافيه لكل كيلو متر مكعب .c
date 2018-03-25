#include<stdio.h>
void main()
{
    float Consumption,Chargeprice,Tax,TotalPrice,MorePrice,excess,priceforecess;
    int Type;
    
    printf("Enter Consumption in cubic meter : ");
    scanf("%f",&Consumption);
    printf("Enter Type : If Residential enter '1' If Commercial Enter '2' ");
    scanf("%d",&Type);
    printf("----------------------------------------------------\n");
    
    if (Consumption >= 1 && Consumption <= 3.99)
    {
        Chargeprice = 6;
    }else if (Consumption >= 4 && Consumption <= 7.99)
    {
        Chargeprice = 11;
    }else if (Consumption >= 8 )
    {
        Chargeprice = 16;
        
    }else{
        printf("Erroe");
    }
    
    
    switch (Type) {
        case 'R':
            Tax = (Chargeprice) * (0.02);
            TotalPrice = Chargeprice + Tax;
            printf("Total Consumption  : %.4f cubic meter \n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("Total Praice       : %.4f OMR\n",TotalPrice);
            printf("----------------------------------------------------\n");
            if (Chargeprice > 8) {
                excess = 8 - Chargeprice;
                priceforecess = excess * 1.000;
                TotalPrice = Chargeprice + Tax + MorePrice + priceforecess;
            }
            break;
        case 'C':
            MorePrice = Chargeprice * 0.04;
            Tax = Chargeprice * 0.02;
            TotalPrice = Chargeprice + Tax + MorePrice;
            printf("Total Consumption  : %.4f cubic meter\n",Consumption);
            printf("Tax                : %.4f OMR \n",Tax);
            printf("More priace        : %.4f OMR \n",MorePrice);
            printf("Total Praice       : %.4f OMR \n",TotalPrice);
            printf("----------------------------------------------------\n");
            if (Chargeprice > 8) {
                excess = 8 - Chargeprice;
                priceforecess = excess * 1.000;
                TotalPrice = Chargeprice + Tax + MorePrice + priceforecess;
            }
            break;
        default:
            
            printf("erorr Type!\nplees inter corect type of Consumption \n");
            break;
    }
    
    
}

