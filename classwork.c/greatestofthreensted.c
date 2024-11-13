#include<stdio.h>
int main(){ 
    int a,b,c;
    printf("enter 1st no :");
    scanf("%d",&a);
    printf("enter 2nd no :");
    scanf("%d",&a);
    printf("enter 3rd no :");
    scanf("%d",&a);
    if(a>b){
        if(a>c)
        printf("%d is greatest " ,a);
        else 
        printf("%d is greatest " , b);
    }
    else
     {
    if (b>c)
    printf("%d is greatest " , b);
    else 
    printf("%d is greatest of " , c);
    }
    return 0;
}