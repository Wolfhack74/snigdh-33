  #include<stdio.h>
  int main() {
    int x,y,z;
    printf("give two no ");
    scanf("%d",&x);
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("%d%d",x,y);
    return 0;
  }