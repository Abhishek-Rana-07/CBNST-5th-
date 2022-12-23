// #include <stdio.h>
// #include <math.h>
// float f(float x)
// {
//     return ((x*x)-12);
// }
// float df(float x)
// {
//     return(2*x);
// }
// float g(float x)
// {
//     return x - (f(x) / df(x));
// }
// int main()
// {
//     float x0, x1, allowed_error;
//     int it= 0;
//     printf("Equation is : x=(12)^1/2\n");
//     printf("Enter the values of x0 and x1 \n");
//     scanf("%f %f", &x0, &x1);
//     printf("Enter the allowed Error \n");
//     scanf("%f", &allowed_error);

//     if (f(x0) * f(x1) < 0)
//     {
//         while (1)
//         {
//             x1 = g(x0);
//             it++;
//             printf("%d iteration, the value of x%d is: %f \n", it, it,x1);
//             if (fabs(x1 - x0) <= allowed_error)
//             {
//                 printf("Root is x1 : %f \n", x1);
//                 printf("Total Number of Iterations are : %d \n", it);
//                 break;
//             }
//             else
//             {
//                 x0 = x1;
//             }
//         }
//     }
//     else
//     {
//         printf(" Wrong Interval try again \n ");
//     }
//     return 0;
// } 

#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (3*x-cos(x)-1);
}
float df(float x)
{
    return (3+sin(x));
}
float g(float x)
{
    return (x- f(x)/df(x));
}
int main()
{
    float x0, x1, error;
    int it=0;
    printf("Enter values of x0 and x1\n");
    scanf("%f %f",&x0,&x1);
    if((f(x0)*f(x1))<0){
        printf("Enter the allowed error\n");
        scanf("%f",&error);

        while(1)
        {
            it++;
            x1=g(x0);
            printf("%d iteration, the value of x%d is:  %f\n",it, it,x1);
            if(fabs(x1 - x0)<=error)
            {
                printf("root of the equation is : %f\n",x1);
                break;
            }
            else{
                x0=x1;
            }
        }
    }
    else{
        printf("Wrong interval\n");
    }
}