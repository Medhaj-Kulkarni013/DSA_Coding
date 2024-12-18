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
    printf("Enter the no: ");
    scanf("%d",&n);
    int r;
    printf("Enter the no: ");
    scanf("%d",&r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("The nCr is : %d",ncr);

    return 0;
}