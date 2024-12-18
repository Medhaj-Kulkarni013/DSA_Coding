#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int reverse = 0;
    int b = n;
    while(n>0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }

    if(b == reverse)
    {
        printf("%d is a Palindrome.",b);
    }
    else
    {
        printf("%d is not a Palindrome.",b);
    }


    return 0;
}
