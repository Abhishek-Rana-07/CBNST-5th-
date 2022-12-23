#include<stdio.h>
float f(float x, float y){
    return ((x-y)/2);
}
int main(){
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int n;
    printf("Enter the initial condition\n");
    printf("x0= ");
    scanf("%f",&x0);
    printf("y0: ");
    scanf("%f",&y0);
    printf("Enter the value of x: ");
    scanf("%f",&xn);
    printf("\nEnter the value of step height: ");
    scanf("%f",&h);

    n=(int)((xn-x0)/h);

    for(int i=1; i<=n ;i++){
        k1=h*(f(x0,y0));
        k2= h*(f((x0+h/2),(y0+k1/2)));
        k3= h*(f((x0+h/2),(y0+k2/2)));
        k4= h*(f((x0+h),(y0+k3)));
        k= (k1+ 2*k2 + 2*k3+ k4)/6;
        yn= y0+k;

        printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
        x0=x0+h;
        y0=yn; 
    }

    printf("\n Value of y at x= %0.2f is %0.3f", xn,yn);

}