// 2,5,8,11 series
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int a=2;
    for(int i=1; i<=n; i++)
    {
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}