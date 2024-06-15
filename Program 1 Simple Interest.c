Program 1:Simple Interest

#include <stdio.h>

void main()

{
    
int p,t;
    
float r,si;
    
printf("\n Enter the principle");
    
scanf("%d", &p);
    
printf("\n Enter the rate of interest");
    
scanf("%f", &r);
    
printf("\n Enter the time");
    
scanf("%d",&t);
    
si=p*r*t/100;
    
printf("si:%f",si);

}