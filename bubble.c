#include<stdio.h>
int main()
{
  int a[20],i,j,n,temp;
  printf("enter the number of elements");
  scanf("%d",&n);
printf("enter the elements");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("unsorted list is \n");
  for(i=0;i<n;i++)
      {
        printf("%d\n",a[i]);
      }

    for(i=0;i<n-1;i++)
      {
        for(j=0;j<n-1-i;j++)
          {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
          }
      }

  printf("the sorted array is\n");
    for(i=0;i<n;i++)
      {
        printf("%d\n",a[i]);
      }
return 0;
}
