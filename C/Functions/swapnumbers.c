#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int temp;
    // temp=a;
    // a=b;
    // b=temp;

    // 2nd Method without using extra variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d",b);

    return 0;
}