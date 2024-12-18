#include<stdio.h>
int main()
{
    int a=2;
    int b;
    printf("Enter the power : ");
    scanf("%d",&b);
    for(int i=1; i<=b-1; i++)
    {
       a = a*2;
    }
    printf("The value of a to the power b is : %d ",a);
    return 0;
}