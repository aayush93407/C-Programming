#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2,real,imag, desc ;
  printf("enter the value of a,b and c ");
  scanf("%f%f%f",&a,&b,&c);

if (a==0){

 printf("the equation is linear ");
  return 1;
}
desc= b*b - 4*a*c;

if (desc==0){

  printf("the roots are real and equal \n");
  r1=r2= -b/(2*a);
  printf("the roots are r1=%f and r2=%f\n" ,r1,r2);
}
else if (desc > 0){
  printf("the roots are real and distinct \n");
  r1= -b + sqrt(desc) / (2*a);
  r2= -b - sqrt(desc) / (2*a);
  printf("the roots are r1=%f and r2=%f\n",r1,r2);
}

else{
  printf("the roots are imaginary\n");

  real= -b/(2*a);
  imag= sqrt(-desc)/ (2*a);
  printf(" r1=%f+i%f" , real,imag);
  printf("r2=%f-i%f", real,imag);

}
  return 0;
}