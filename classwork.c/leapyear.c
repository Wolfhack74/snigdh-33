#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    if(n%4==0){
        printf("leap year");
    }
    else{
        printf("normal year");
    }
    return 0;

}