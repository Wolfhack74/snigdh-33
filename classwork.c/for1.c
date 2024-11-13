#include<stdio.h>
int main ()
{
    int a;
    //for(a=1;a<=50;a++)
    printf("Enter any number in the range of 1 to 100 \n: ");
    scanf("%d", &a);

    if(a>100)
    {
        printf("entered number is out of rnage : ");
    }
    else
    {
        if (a%2==0)
        {
            printf("%d is a even number : ",a);
        }
        else
        {
            printf("%d is a odd number : ", a);
        }
        
    }
    return 0;
}