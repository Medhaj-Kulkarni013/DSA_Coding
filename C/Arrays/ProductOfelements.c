#include<stdio.h>
int main()
{
    int n; // INPUT ARRAY SIZE
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    int arr[n];
    int product = 1;
    for(int i=0; i<n; i++){
        printf("Enter the %d array element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        product = product * arr[i];
    }
    printf("\nThe Product of Array elements is : %d",product);
    return 0;
}