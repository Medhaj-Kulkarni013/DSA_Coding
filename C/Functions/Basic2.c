#include<stdio.h>
void america(){
    printf("Hello America\n");
}
void australia(){
    printf("Hello Australia\n");
    america();
}
void england(){
    printf("Hello England\n");
    australia();
}
void india(){
    printf("Hello India\n");
    england();
}
int main(){
    india();
    return 0;
}