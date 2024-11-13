#include<stdio.h>
int main (){
    int a,b=0;
    printf("enter the no ");
    scanf("%d",&a);
    for ( int i=0; i<a;i++){
        if (i%2==0){
            b=b+i;
        }
    }
    printf("%d",b);
    return 0;
}