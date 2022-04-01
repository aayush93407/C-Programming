#include<stdio.h>
#include <math.h>
#define pi 3.1428
int main()
{ float x,num,den,term,sum=0,i,degree;
  printf("enter the angle in degree");
  scanf("%f",&degree);
x=degree*(pi/180);
  sum=x;
  num=x;
  den=1;
  term=x;
  i=1;
do{
  i=i+2;
  num=-num*x*x;
  den=den*i*(i-1);
  term=num/den;
  sum=sum+term;
}while(fabs(term)>=0.00001);
  
  printf("the computed value is sin(%f)=%.2f",degree,sum);
  return 0;
  
}