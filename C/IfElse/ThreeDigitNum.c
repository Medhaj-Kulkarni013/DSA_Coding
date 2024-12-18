#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("The Number is Three Digit Number.");
    else
    printf("The Number is not a Three Digit Number.");
    
    return 0;
}