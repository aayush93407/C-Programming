#include<stdio.h>
int main()
{
  int a,b;
  float c;
  char o;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the operator");
scanf("%c",&o);
if(o=='+')
{
  c=a+b;
}
else if(o=='-')
{
  c=a-b;
}
else if(o=='*')
{
  c=a*b;
}
else if(o=='/')
{
  c=(a/b);
  }
printf("Result:%f",c); 
  return 0;
}

