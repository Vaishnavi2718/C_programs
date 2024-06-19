#include <stdio.h>

void main() 
{
    int a,b,c;
    printf("\n Enter any number:");
    scanf("%d",&a);
    printf("\n Enter any number:");
    scanf("%d",&b);
    printf("\n Enter any number:");
    scanf("%d",&c);
    if ((a>b) &&(a>c))
    {
        printf("%d is the greatest number",a);
    }
    else if ((b>a) &&(b>c))
    {
        printf("%d is the greatest num",b);
        
    }
    else if ((c>a) &&(c>b))
    {
        printf("%d is the greatest num",c);
    }
    
    else
    {
        printf("%d They all are equal number",a);
    }
}