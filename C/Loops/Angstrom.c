#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int lastdigit,sum = 0;
    int b = n;
    while(n>0)
    {
        lastdigit = n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == b)
    {
        printf("%d is an Armstrong Number",b);
    }
    else
    {
        printf("%d is not an Armstrong Number",b);
    }

    return 0;
}