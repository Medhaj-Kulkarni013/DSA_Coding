#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int reverse = 0;
    while( n > 0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;


    }
    printf("The Reverse order of the Number is : %d",reverse);



    return 0;
}

