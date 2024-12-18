#include<stdio.h>
int factorial(int z){
    int fact=1;
    for(int i=1; i<=z; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int x,int y){
    int ncr = factorial(x)/(factorial(y)*factorial(x-y));
    return ncr;
}
int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
          int iCj = combination(i,j);
          printf("%d ",iCj);
        }
        printf("\n");
    }
    
    return 0;
}