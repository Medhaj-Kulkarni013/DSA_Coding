#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int sum = 0;
    while(n>0)
    {
        int lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;

    }
        printf("The Sum of the Even the Digits is : %d",sum);




    return 0;
}