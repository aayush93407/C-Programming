#include<stdio.h>
#include <math.h>
int main()
{
  int i,n;
  float a[10],sum=0,mean=0,*p,var=0,sd=0;
  printf("enter the number of elements");
  scanf("%d",&n);
  printf("enter the elements");
  p=a;
  for(i=0;i<n;i++)
  {
    scanf("%f",p);
    p++;
  }
  p=a;
  for(i=0;i<n;i++)
    {
      sum=sum+*p;
      p++;
    }
  p=a;
  mean=sum/n;
  for(i=0;i<n;i++)
    {
      var=var+pow((*p-mean),2);
      p++;
    }
  var=var/n;
  sd=sqrt(var);

  printf("mean=%f\nvar=%f\nsd=%f",mean,var,sd);

  return 0;
}