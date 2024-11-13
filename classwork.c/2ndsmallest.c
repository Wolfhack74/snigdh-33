
#include<stdio.h>
int main(){
    int a;
    int b,c,d;
    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of b ");
    scanf("%d", &b);
    printf("enter the value of c ");
    scanf("%d", &c);
    printf("enter the value of d ");
    scanf("%d", &d);
    if(a<b && a<c && a>d || a<b && a>c && a<d || a>b && a<c && a<d){
        printf("a is second smallest");
    }  
   else if(b<a && b<c && b>d || b<a && b>c && b<d || b>a && b<c && b<d){
        printf("b is second smallest");
    }  
    else if(c<b && c<a && c>d || c<b && c>a && c<d || c>b && c<a && c<d){
        printf("c is second smallest");
    } 
    else if(d<b && d<c && d>a || d<b && d>c && d<a || d>b && d<c && d<a){
        printf("d is second smallest");
    }  
    return 0;
    }