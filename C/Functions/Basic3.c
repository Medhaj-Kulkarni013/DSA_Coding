#include<stdio.h>
int sum(int x , int y){// x,y are Arguments and they
    int add = x + y; // can also be named as a & b                                        
    printf("The sum is : %d",add);// different from a,b from main fn
    return 0;// int is a return type which means it returns integer 
}           // value...it can be written as return x+y; instead of return 0;
            // void is also return type which returns nothing hence dont write 
            // return at the end when we use void fn
int main() 
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    sum(a,b);

    return 0;
}