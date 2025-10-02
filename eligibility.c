// Name:Name:Obunga Cecilia Auma
//Reg No:PA106/G/28829/25
//Discription:Program work to  check if a student is eligible for exams

#include <stdio.h>
int main(){

float attendance;
float averageMarks;

printf("enter your attendance percentage:");
scanf("%f",&attendance);

printf("enter your averageMarks:");
scanf("%f",&averageMarks);

if(attendance>=75& averageMarks>=40)
{printf("student is legible for final exam.\n");
}
else
{printf("Not eligble.\n");
}
    return 0;
}
