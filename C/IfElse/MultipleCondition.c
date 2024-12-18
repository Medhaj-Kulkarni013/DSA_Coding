// Check weather the num is divisible by 5 or 3 but not 15
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if((n%3==0 || n%5==0) && (n%15!=0))
    { 
        printf("The number is divisible by 5 or 3 but not 15.");
    }
    else
    {
        printf("The number doesn't satisfy condition.");
    }
    return 0;
}