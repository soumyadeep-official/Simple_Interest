#include <stdio.h>
int main()
{
 float p,r,t,SI;
 printf("Enter your principle value: ");
 scanf("%f", &p);
 printf("Enter your rate: ");
 scanf("%f", &r);
 printf("Enter your time period: ");
 scanf("%f", &t);
 SI=(p*r*t)/100;
 printf("The Simple Interest is: %f", SI);
 return 0;
}