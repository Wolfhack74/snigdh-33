#include<stdio.h>
int main() {
int a=5;
int m1=a++;
printf("%d",m1);
printf("\n");
int m2=++a;
printf("%d",m2);
printf("\n");
int m3=++a + a++;
printf("%d",m3);
return 0;
}