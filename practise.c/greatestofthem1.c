#include<stdio.h>
int main(){
    int a , b , c ,d;
    printf("enter a number");
    printf("enter a number");
    printf("enter a number");
    printf("enter a number");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is greatest ");
    }
    else if (b>a && b>c && b>d)
    {
        printf("b is greatest ");
    }
    else if (c>a && c>b && c>d)
    {
        printf("c is greatest ");
    }
    else if (d>a && d>b && d>c)
    {
        printf("d is greatest ");
    }
    return 0;
}