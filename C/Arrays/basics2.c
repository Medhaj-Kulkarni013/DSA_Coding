// TAKING INPUT AND OUTPUT USING FOR LOOP
#include<stdio.h>
int main()
{
    int arr[5]; // ARRAY SIZE CAN ALSO BE TAKEN AS INPUT
    for(int i=0; i<5; i++){  //INPUT can be mostly taken using FOR loop only
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}