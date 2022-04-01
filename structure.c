#include<stdio.h>
int main()
{
  struct student
  {
    int stu_id;
    char name[20];
    float eng,hin,sst,sci,math,comp,avg;
  
  };

    struct student s[20];
    int i,n;

    printf("enter the number of records");
    scanf("%d",&n);

    printf("enter the %d student detail",n);

    for(i=0;i<n;i++)
      {
        printf("enter student id");
        scanf("%d",&s[i].stu_id);
        printf("enter student name");
        scanf("%s",s[i].name);
        printf("enter marks of english\nhindi\nsst\nscience\nmaths\ncomputer");
        scanf("%f%f%f%f%f%f",&s[i].eng,&s[i].hin,&s[i].sst,&s[i].sci,&s[i].math,&s[i].comp);
        
      }
  for(i=0;i<n;i++)
    {
      s[i].avg=(s[i].eng+s[i].hin+s[i].sst+s[i].sci+s[i].math+s[i].comp)/6;
    }

  printf("student scoring above the average marks");
  printf("\n\nID\tname\taerage\n\n");
  for(i=0;i<n;i++)
    {
      if(s[i].avg<35)
        printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
    }

  return 0;
}