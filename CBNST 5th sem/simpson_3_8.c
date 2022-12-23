#include<stdio.h>
float findValue(float x){
    return (1/(1+x*x));
}
int main(){
    float i, a,b, sum=0, h;
    int n, position_of_term=1;
    printf("Enter the value of a and b: \n");
    scanf("%f%f",&a,&b);
    printf("Enter the no. of intervals: \n");
    scanf("%d",&n);

    h=(b-a)/n;
    sum= findValue(a)+findValue(b);
    for(i=a+h; i<b ;i=i+h){
        if(position_of_term%3==0){
            sum+= 2*findValue(i);
        }
        else{
            sum+= 3*findValue(i);
        }
        position_of_term++;
    }
    sum= (3*sum*h)/8;
    printf("\nThe value of integral is: %f",sum);
}