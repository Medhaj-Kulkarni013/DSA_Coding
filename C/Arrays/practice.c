#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        printf("Enter the %d element of Array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the Array : %d",sum);
}