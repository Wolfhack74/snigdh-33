#include<stdio.h>
int main() {
    int x=20;
    int y=50;
     x=x+y;
     y=x-y;
     x=x-y;
    printf("therefore x is : %d", x);
    printf("therefore y is : %d", y);
    return 0;
} 