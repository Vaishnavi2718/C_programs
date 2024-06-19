Program 5: Reversed Digit of a number
#include <stdio.h>

void main() 
{
    int num, digit=0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num> 0) 
    {
        rem = num % 10;
        digit = digit * 10 + rem;
        num = num/10;
    }    
        printf("Reversed Number = %d",digit);

}