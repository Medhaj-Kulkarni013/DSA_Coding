#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int m=n-1;
    int nst=n-1;
    int nsp=1;
    for(int i=1; i<=2*n-1; i++)//For the first line * * * * * * *
    {
        printf(" *");
    }
    printf("\n");
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=nst; j++)
        {
            printf(" *");
        }
        for(int j=1; j<=nsp; j++)
        {
            printf("  ");
        }
        for(int j=1; j<=nst; j++)
        {
            printf(" *");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}