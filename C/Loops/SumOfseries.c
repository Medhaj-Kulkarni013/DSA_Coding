// 1-2+3-4....
#include<Stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }
    printf("Sum of the first %d terms is : %d",n,sum);
        return 0;
}
