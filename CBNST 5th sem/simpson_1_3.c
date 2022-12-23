#include<stdio.h>
float findValue(float x){
    return (1/(1+x*x));
}
int main(){
    int n, position_of_term=1;
    float a, b,i, sum=0,h;
    printf("Enter the value of and b: \n");
    scanf("%f%f",&a,&b);
    printf("Enter the number of intervals: \n");
    scanf("%d",&n);

    h=(b-a)/n;
    sum= findValue(a)+findValue(b);
    for(i= a+h; i<b; i=i+h){
        if(position_of_term%2==0){
            sum+= 2*findValue(i);
        }
        else{
            sum+= 4*findValue(i);
        }
        position_of_term++;
    }
    sum= (sum*h)/3;
    printf("\nThe value of integral is: %f",sum);
}