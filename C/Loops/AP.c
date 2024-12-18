// 2,5,8,11 series
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=2; i<=(3*n-1); i=i+3)
    {
        printf("%d ",i);
    }
    return 0;
}