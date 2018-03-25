#include<stdio.h>
void main()
{
    float Nminutes,Nmessages,Adminut,PriceAdcall=0.0,pricefor50mi,Priceminutes,PriceAdmess;
    float BillorCall,TotalBill,pricefor50me,Admess,Pricemess,BillforMess,Tax,OrginalBill;
    float SupportCC=1.500;
    
    printf("Enter Minute of Call : ");
    scanf("%f",&Nminutes);
    printf("Enter Number of Messages : ");
    scanf("%f",&Nmessages);
    
    pricefor50mi = 5.000;
    pricefor50me = 5.000;
    printf("\n--------------------(Call Bill)-----------------------\n");
    if (Nminutes <= 50) {
        Priceminutes = Nminutes * 0.1;
        BillorCall = Priceminutes;
        
    }else if(Nminutes > 50) {
        Adminut = Nminutes - 50;
        PriceAdcall = Adminut * 0.150;
        BillorCall = PriceAdcall + pricefor50mi;
        printf("Addition Minutes        : %.3f \n",Adminut);
        printf("Addition Minutes Bill   : %.3f \n",PriceAdcall);
    }
    printf("Bill for Call           : %.3f \n",BillorCall);
    
    printf("\n-------------------(Messages Bill)---------------------\n");
    if (Nmessages <= 50) {
        Pricemess = Nmessages * 0.1;
        BillforMess = Pricemess;
        
    }else if(Nmessages > 50) {
        Admess = Nmessages - 50;
        PriceAdmess = Admess * 0.07;
        BillforMess = PriceAdmess + pricefor50me;
        printf("Addition Message        : %.3f \n",Admess);
        printf("Addition Message Bill   : %.3f \n",PriceAdmess);
    }
    printf("Bill for Message        : %.3f \n",BillforMess);
    
    OrginalBill = BillorCall + BillforMess;
    if (TotalBill < 10) {
        Tax = OrginalBill * 0.025;
    }else if (OrginalBill >= 10 && OrginalBill <= 29.99){
        Tax = OrginalBill * 0.04;
    }else if (OrginalBill > 30){
        Tax = OrginalBill * 0.055;
    }
    
    TotalBill = BillorCall + BillforMess + Tax + SupportCC;
    
    printf("\n----------------------------------------\n");
    printf("Orginal Bill             : %.3f \n",OrginalBill);
    printf("Tax                      : %.3f \n",Tax);
    printf("Support Call Cnter       : %.3f \n",SupportCC);
    printf("Total Bill               : %.3f \n",TotalBill);
    
}



