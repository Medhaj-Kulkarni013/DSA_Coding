#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    printf("Enter a,b,c for quad eq of form ax2+bx+c : ");
    scanf("%d %d %d",&a,&b,&c);
    float D = b*b - 4*a*c;
    if(D>0)
    {
         x1 = (-b+sqrt(D))/2*a; x2 = (-b-sqrt(D))/2*a;
        printf("The Roots x1=%f and x2=%f are Real.",x1,x2);
    }
    else if(D==0)
    {
         x1 = (-b+sqrt(D))/2*a; x2 = (-b-sqrt(D))/2*a;
         printf("The Roots x1=%f and x2=%f are Real and Equal.",x1,x2);
    }
    else
    {
        x1 = -b/(2*a); x2 = sqrt(-D)/(2*a); 
        printf("The Roots %f+%fi and %f-%fi are Imaginary.",x1,x2,x1,x2);
    }

}