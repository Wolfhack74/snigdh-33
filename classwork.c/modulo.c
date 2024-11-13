#include<stdio.h>
int main(){
    int n;
    printf("enter a no \n ");
    scanf("%d",&n);
    if (n>0){
        {
            while (n%2==0)

            {
             n=n/2;
            }
        }
        if (n==1){
            printf("yes if power of 2");
        }
        else{
            printf("not power of 2 ");
        }
    }
    return 0;
}