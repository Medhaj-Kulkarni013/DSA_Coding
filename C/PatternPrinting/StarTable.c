#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int m=n-1;
    for (int i=1; i<=2*n-1; i++)//For the first line * * * * * * *
    {
        printf(" *");
    }
    printf("\n");
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m+1-i; j++)
        {
            printf(" *");
        }
        for(int j=1; j<=i; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=i-1; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=m+1-i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}