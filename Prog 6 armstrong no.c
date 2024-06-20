Program 6 : Armstrong Number

#include <stdio.h>

void main() 
{
    int num, sum=0, digit, temp;
    printf("Enter an number: ");
    scanf("%d", &num);
    temp=num;
    while(temp> 0) 
    {
    
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
        if (sum==num)
        
            printf(" %d is an Armstrong number \n", num);
        
        else
        
           printf(" %d is not an Armstrong number \n", num);
        
    
}