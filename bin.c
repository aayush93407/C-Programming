#include <stdio.h>
int btod(int);
int main()
{
  float bin,dec;
  printf("enter the binary value");
  scanf("%f",&bin);
  dec=btod(bin);
  printf("the decimal value is %f",dec);

  return 0;
}

int btod(bin)
{
  if(bin==0)
  {
    return 0;
  }
else{
  return bin%10+btod(bin/10)*2;
}
//good
  
}