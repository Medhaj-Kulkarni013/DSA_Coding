#include<stdio.h>
int main()
{
    int n; // INPUT ARRAY SIZE
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        printf("Enter the %d array element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    printf("The Sum of Array elements is : %d",sum);
    return 0;
}