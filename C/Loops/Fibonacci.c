#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %d term of Fibonacci series is : %d",n,sum);
    return 0;
}