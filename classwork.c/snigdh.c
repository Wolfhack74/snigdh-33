#include<stdio.h>
int main() {
    int a=5;
    int b=10;
    int c=6;
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if (b>a && b>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
    return 0;
}