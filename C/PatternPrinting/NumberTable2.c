// CAN BE DONE BY NUMTABLE 1 METHOD AS WELL
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int m=n-1;
    int nst=n-1;
    int nsp=1;
    for(int i=1; i<=2*n-1; i++)//For the first line 1 2 3 4 5 6 7
    {
        printf(" %d",i);
    }
    printf("\n");
    for(int i=1; i<=m; i++)
    {
        int a=1;
        for(int j=1; j<=nst; j++)
        {
            printf(" %d",j);
            a++;
        }
        for(int j=1; j<=nsp; j++)
        {
            printf("  ");
            a++;
        }
        for(int j=1; j<=nst; j++)
        {
            printf(" %d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}