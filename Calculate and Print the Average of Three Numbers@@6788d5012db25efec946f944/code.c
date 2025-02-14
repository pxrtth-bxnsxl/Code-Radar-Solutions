#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float sum = float(a+b+c);
    float avg = sum/3;
    
    printf("%f",avg);
    return 0;
}