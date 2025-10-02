// Name:Name:Obunga Cecilia Auma
//Reg No:PA106/G/28829/25
// Description:Programming work to prompt the user concerning the water bills charges

#include <stdio.h>
int main(){

int units;
int bill;

printf("enter water units:");
scanf("%d",&units);

if (units<=30)
{bill=units*20;
printf("total water bill:%.2dKES\n",bill);} 

    
else if(units>=31)
{bill=units*25;
printf("total water bill:%.2dKES\n",bill);}

else{bill=units*30;

printf("total water bill:%.2dKES\n",bill);}


    return 0;
}