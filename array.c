#include <stdio.h>

int main()
{
    int a[20][20],i,j,m,n;

    printf("Enter the no of rows");
    scanf("%d",&m);
    printf("Enter the no of column");
    scanf("%d",&n);
    printf("enter elements of array");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("2d array is:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
  }