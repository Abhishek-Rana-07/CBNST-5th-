#include<stdio.h>
float findValue(float x){
    return x*x*x;
}
int main(){
    float sum=0, a,b,i,h;
    int n;
    printf("Enter the value of a and b: ");
    scanf("%f%f",&a,&b);
    printf("Enter the no. of intervals: ");
    scanf("%d",&n);

    h=(b-a)/n;
    sum = findValue(a)+findValue(b);
    for( i=a+h; i<b; i=i+h){
        sum+= 2*findValue(i);
    } 
    sum= (sum*h)/2;
    printf("\nThe value of integral is: %f",sum);
}

