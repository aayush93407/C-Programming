#include<stdio.h>
int main()
{
   float unit,charge,total;
   char name[20];
   printf("enter the username:");
   gets(name);//gets is used to accept string
   printf("enter the number of units used");
   scanf("%f" ,&unit);
   if (unit>=1 && unit<=200)
   {
      charge = unit * 0.8;
     }
   else if(unit>200 && unit<=300)
    {
       charge = 200 * 0.8 + (unit-200) * 0.9;
     }
    else if(unit>300)
      {
        charge = 200 *0.8 + 100 * 0.9 + (unit-300)*1;
     } 
     else
     {
        printf("invalid unit\n");
        return 1;
      }
      total= charge + 100;
      if(total>400)
      {
        total = total + (total * 0.15);
      }
      printf("\n------------------\n");
      printf("\nELECTRICITY BILL");
      printf("\n------------------\n");
      printf("\n NAME : %s",name);
      printf("\nUNITS CONSUMED : %f" ,unit);
      printf("\nTOTAL BILL AMOUNT : %f" ,total);
      printf("\n------------------\n");
      return 0;
}
















//if we are using string then we can use gets as function 
 