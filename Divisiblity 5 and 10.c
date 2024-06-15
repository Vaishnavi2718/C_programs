Program 3: Divisbility check 5 and 10
include <stdio.h>


void main() 

{ 
   int num;
   
printf("\n Enter any number:");
  
 scanf("%d",&num);
   
if ((num%5==0) &&(num%10==0))
   
{
       printf("Number is divisible by 5 and 10");
  
 }
  
 else 
  
 {printf("Not divisible ");
   
}
  
 
}