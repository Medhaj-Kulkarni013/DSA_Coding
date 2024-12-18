// 1,2,4,8,16 series
#include<stdio.h>
int main()
{
    int n;
    int a=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}