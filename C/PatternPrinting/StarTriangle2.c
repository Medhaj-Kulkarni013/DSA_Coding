#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)// i+j=n+1
        {
            printf("* ");
        }
        printf("\n");
    }
    // int n;
    // printf("Enter the number of rows : ");
    // scanf("%d",&n);
    // for(int i=n; i>0; i--)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // return 0;
}