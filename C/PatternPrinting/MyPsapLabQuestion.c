#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter the number of rows : ");
    // scanf("%d",&n);
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=5-i; j++) // n+1-1-i;
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}