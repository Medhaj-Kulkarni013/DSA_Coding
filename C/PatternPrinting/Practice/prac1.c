// NumTable 1
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int m=n-1;
    int b=1;
    for(int i=1; i<=2*n-1; i++)
    {
        if(i<4)
        {
            printf("%d ",b);
            b++;
        }
        else{
            printf("%d ",b);
            b--;
        }
    }
    printf("\n");
    for(int i=1; i<=m; i++)
    {
        int a=3;
        for(int j=1; j<=m+1-i; j++){
            printf("%d ",j);
            
        }
        for(int j=1; j<=i; j++){
            printf("  ");
            
        }
        for(int j=1; j<=i-1; j++){
            printf("  ");
           a--; 
        }
        for(int j=1; j<=m+1-i; j++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }



    return 0;
}