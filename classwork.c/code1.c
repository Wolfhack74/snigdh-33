#include<stdio.h>
int main() {
    float a,b,c,d,e,f,x;
    
    printf("enter value of a");
    scanf("%f", &a);

    printf("enter value of b");
    scanf("%f", &b);
    c=a-b;
    d=a+b;
    e=a*b;
    f=a/b;
    printf("%f\n",c);
    printf("%f\n",d);
    printf("%f\n",e);
    printf("%f\n",f);
    /*now finding value of cubic equation of their variable*/
    printf("enter value of x\n");
    scanf("%f", &x);
    float answer =(a*x*x*x)+(b*x*x*x)+(c*x)+(d);
    printf("answer%f\n", answer);

    return 0;
}