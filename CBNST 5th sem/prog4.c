// #include <stdio.h>
// #include <math.h>

// float polyFunc(float x)
// {
//     //for eq.2: return ((2*x)-log10f(x)-7);
//     return (cos(x)-3*x+1);
// }

// float diffFunc(float x)
// {
//     //for eq.2: return (1/(x*2.303));
//     return fabs(-sin(x)/3);
// }

// float xForm(float x)
// { 
//     //for eq.2: return ((log10f(x)+7)/2);
//     return ((cos(x)+1)/3);
// }
// int steps = 0;
// void calIterative(float* x, float allowErr)
// {
//     *x = xForm(*x);
//     steps++;
//     printf("%d  iteration and the value of x is - %f\n", steps, *x);
//     if (fabs(polyFunc(*x)) <= allowErr){
//         return ;
//     }
        
//     calIterative(x, allowErr);
// }

// int main()
// {
//     float x, allowErr;
//     printf("For Equation: 2*x-log(x)-7\n");
//     printf("Enter the value of x0 - ");
//     scanf("%f", &x);
//     if (diffFunc(x) < 1)
//     {
//         printf("Input is satisfying the condition\n");
//         printf("Enter the allowed Error - ");
//         scanf("%f", &allowErr);
//         calIterative(&x, allowErr);
//         printf("Roots are: %f\n",x);
//     }
//     else
//         printf("Oops invalid input!!!");
//     return 0;
// }


#include<stdio.h>
#include<math.h>
float poly(float x)
{
    return (cos(x)-3*x +1);
}
float xform(float x)
{
    return ((cos(x)+1)/3);

}
float diff(float x)
{
    return (-sin(x)/3);
}
int steps=0;
void Iteration(float *x, float error)
{
    *x= xform(*x);
    steps++;
    printf("%d  %f\n",steps,*x);
    if(fabs(poly(*x))<=error)
    {
        return;
    }
    Iteration(x,error);
}
int main()
{
    float x0, error;
    printf("Enter thevalue of X0: \n");
    scanf("%f",&x0);

    if(fabs(diff(x0))<1)
    {
        printf("Valid\n");
        printf("Enter the allowed error\n");
        scanf("%f",&error);
        Iteration(&x0,error);
        printf("Root is: %f\n",x0);
    }
    else{
        printf("Inavid\n");
    }
}