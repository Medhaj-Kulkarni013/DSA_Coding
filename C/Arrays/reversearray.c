#include<stdio.h>
int main()
{
    int arr[5]; 
    for(int i=0; i<5; i++){  //INPUT can be mostly taken using FOR loop only
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4; i>=0; i--){
        printf("%d ",arr[i]);
    }

    return 0;

}