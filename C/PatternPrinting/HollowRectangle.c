#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of Rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the no. of Columns : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {   
            if(i == 1 || j == 1 || i == n || j == m){
            printf("* ");}
            else{
            printf("  ");}
        }
        printf("\n");
    }
    return 0;
}