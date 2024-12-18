#include<stdio.h>
void swap(int*x , int*y){
    int temp = *x; // temp is now equal to a
    *x = *y; // a is swapped
    *y = temp; // b is swapped
    return;
}
int main()
{
    int a;
    printf("Enter the first num a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the first num b : ");
    scanf("%d",&b);
    swap(&a,7&b); // we have to pass the address
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d",b);
    return 0;
}