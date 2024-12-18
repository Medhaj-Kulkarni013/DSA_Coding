#include<stdio.h>
int main()
{
    int a = 7;
    //%p is format specifier for pointers to get address.
    printf("%p\n",&a);// will give address of a in hexadecimal(or in original form)
    printf("%d\n",&a);// will give address of a  in decimal.
    int*p=&a; // pointer p declared to store address of a;
    printf("%p\n",p);// same as first
    printf("%d\n",p);// same as second
    printf("%d\n",*p);// will print the value at the address which is stored in pointer. 
    //printf("%p\n",*p);// NO USE
    printf("%p\n",&p);// will give address of the pointer.
    int**x=&p;// double pointer to store the address of the pointer.
    printf("%p\n",x);// same as sixth.
    printf("%p\n",*x);// same as first
    printf("%d\n",*x);// same as second
    printf("%d\n",**x);// same as fifth
    **x=4;// VALUE OF a IS CHANGED
    printf("%d\n",a);
    *p=5;// VALUE OF a IS CHANGED AGAIN
    printf("%d",a);

    return 0;
}