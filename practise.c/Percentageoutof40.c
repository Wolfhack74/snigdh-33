#include<stdio.h>
int main(){
    float m1 = 34; // marks of maths 
    float m2 = 37;// marks of chemistry 
    float m3 = 38; // marks of physics 
    float m4 = 35; // marks of english
    float percentage = (m1+ m2+m3+m4*100)/40;
    printf("percentage of subject : %f",percentage);
    return 0; 


}