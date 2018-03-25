
#include<stdio.h>
void main()
{
    float DataInput,Refund,Tax = 0.0,praice,DatausedinGB,Totalprice,Mordata,Excess,Price30Gb;
    
    printf("Enter Data usage in KB : ");
    scanf("%f",&DataInput);
    DatausedinGB = (DataInput/1024)/1024;
    
    if (DatausedinGB < 10) {
        Refund = 3;
    }else if(DatausedinGB >= 10 && DatausedinGB <= 15.99){
        Refund = 2;
    }else if(DatausedinGB >= 16 && DatausedinGB <= 25){
        Refund = 1;
    }
    //praic for 30 Gb
    Price30Gb = 30 * 0.666666666666667;
    
    //if Data less 30 Gb
    if (DatausedinGB <= 30){
        praice = DatausedinGB * 0.666666666666667;
    }
    //morre 30 GB
    if (DatausedinGB > 30){
        Mordata = DataInput - 31457280;
        Excess = (((Mordata/100)/100)/100) * 0.700;
        praice = Price30Gb + Excess;
        
    }
    
    if(praice > 25){
        
        Tax = (praice * 0.02);
    }
    
    Totalprice = praice + 0.700 + Tax;
    printf("----------------------------------------------------\n");
    printf("Total Data used   : %.4f GB \n",DatausedinGB);
    printf("Price For Data    : %.4f OMR \n",praice);
    printf("Refund            : %.4f OMR \n",Refund);
    printf("Tax               : %.4f OMR\n",Tax);
    printf("Total price       : %.4f OMR\n",Totalprice);
    printf("----------------------------------------------------\n");
    
}

