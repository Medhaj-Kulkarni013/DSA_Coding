#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++){
            int iCj = factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d ",iCj);
        }
        printf("\n");
    }
    return 0;
}