#include<stdio.h>
int main(){
    int m, n;
    int array[2][2];
    printf("enter a no ");
    scanf ("%d%d",&m,&n);
    printf("%d%d",m,n);
     for (int i=0; i<m ; i++)
     {
         for (int j=0;j<n;j++){
             scanf("%d",&array [i][j]);
         }
     }

    // for (int i=0; i<m ; i++)
    // {
    //     for (int j=0;j<n;j++){
    //         printf("%d",array [i][j]);
    //     }
    //     printf("\n");
    //}
        return 0;
}