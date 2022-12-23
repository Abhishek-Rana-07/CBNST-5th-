// // Bisection Method
// #include<stdio.h>
// #include<math.h>
// float func(float x){
//     return (x*x*x- (5*x)+1);
// }
// float func2(float a, float b){
//     return 0.5*(a+b);
// }

// int main(){
//     float a,b,x,error;
//      printf("Enter the hit nad try value of a and b: ");
//     scanf("%f%f",&a,&b);
//     float f1,f2;

//     if((f1=func(a))*(f2=func(b)) <0){
//         printf("Root lies between a and b: ");
//         printf("Enter the error: ");
//         float p;
//         scanf("%f",&error);
//         int count=0;

//         while(1){
//             count++;
//             p=func2(a,b);
//             x=func(p);

//             printf("%d of iteration %f is:  %f\n",count,p,x);

//             if(fabs(x)<=error){
//                 break;
//             }

//             if(x<0){
//                 if(f1<0){
//                     f1=x;
//                     a=p;
//                 }
//                 else{
//                     f2=x;
//                     b=p;
//                 }
//             }
//             else{
//                 if(f1>0){
//                     f1=x;
//                     a=p;
//                 }
//                 else{
//                     f2=x;
//                     b=p;
//                 }
//             }
//         }
//     }
//     else{
//         printf("Invalid values of a and b\n");
//     }
// }

// // Regular Falsi or Method of false position

// #include<stdio.h>
// #include<math.h>
// float func(float x){
//     return (3*x+sin(x)- exp(x) );
// }
// float func2(float a,float b){
//     return (a-((b-a)/((func(b))-(func(a)))*func(a)));
// }
// int main(){
//     float a,b,x,error;
//     printf("Enter the valusof a and b: ");
//     scanf("%f %f",&a,&b);
//     float f1,f2;

//     if((func(a) * func(b))<0){
//         printf("Roots lies between a and b\n");
//         int count=0;
//         float p;
//         printf("Enter the error value: ");
//         scanf("%f",&error);

//         while(1){
//             count++;
//             p=func2(a,b);
//             x=func(p);

//             printf("%d of iteration %f is %f\n",count,p,x);

//             if(fabs(x)<=error){
//                 break;
//             }

//             if(x<0){
//                 if(f1<0){
//                     f1=x;
//                     a=p;
//                 }
//                 else{
//                     f2=x;
//                     b=p;
//                 }
//             }
//             else{
//                 if(f1>0){
//                     f1=x;
//                     a=p;
//                 }
//                 else{
//                     f2=x;
//                     b=p;
//                 }
//             }
//         }
//     }
//     else{
//         printf("Tnvalid input\n");
//     }
// }

// // Iterative Method
// #include<stdio.h>
// #include<math.h>
// float poly(float x){
//     return (cos(x)-3*x+1);
// }

// float xform(float x){
//     return (cos(x)+1)/3;
// }
// float diff(float x){
//     return (-sin(x))/3;
// }
// int count=0;

// void Iteration(float *x, float error){
//     count++;
//     *x= xform(*x);
//     printf(" %d if iteration value is: %f\n",count,*x);
//     if(fabs(poly(*x))<=error){
//         return ;
//     }
//     Iteration(x,error);
// }
// int main(){
//     float x0, error;
//     printf("Enter the value of x0: ");
//     scanf("%f",&x0);

//     if(fabs(diff(x0))<1){
//         printf("vALID VALUE of x0\n");
//         printf("Enter the allowed error: ");
//         scanf("%f",&error);
//         Iteration(&x0,error);
//         printf("Root is: %f",x0);
//     }
//     else{
//         printf("Invalid\n");
//     }
// }

// // Newton Raphson Method
// #include<stdio.h>
// #include<math.h>
// float func(float x){
//     return (3*x-cos(x)-1);
// }
// float diff(float x){
//     return (3+sin(x));
// }
// float g(float x){
//     return (x-(func(x)/diff(x)));
// }
// int main(){
//     float x0,x1,error;
//     int count=0;
//     printf("Enter the value of x0 and x1: ");
//     scanf("%f %f",&x0,&x1);

//     if(func(x0)*func(x1) < 0){
//         printf("Enter the allowed error: ");
//         scanf("%f",&error);

//         while(1){
//             count++;
//             x1=g(x0);
            
//             printf("%d of iteration is: %f\n",count,x1);

//             if(fabs(x1-x0)<=error){
//                 printf("Root of the equation is: %f\n",x1);
//                 break;

//             }
//             else{
//                 x0=x1;
//             }
//         }
//     }
//     else{
//         printf("Invalid\n");
//     }
// }

// // Gauss Elimination
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);

//     float a[n][n+1], backs[n];
//     printf("Enter the matrix: ");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=n; j++){
//             scanf("%f",&a[i][j]);
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n ;j++){
//             if(j>i){
//                 float ratio= a[j][i]/a[i][i];
//                 for(int k=0 ;k<=n ;k++){
//                     a[j][k]= a[j][k]-(ratio * a[i][k]);
//                 }
//             }
//         }
//     }

//     backs[n-1]= a[n-1][n]/a[n-1][n-1];

//     for(int i= n-2; i>=0; i--){
//         float s=0;
//         for(int j=i+1; j<n;j++){
//             s+= a[i][j]*backs[j];
//         }
//         backs[i]= (a[i][n]-s)/a[i][i];
//     }

//     printf("Upper triangular matrix is: \n");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=n; j++){
//             printf("%0.2f ",fabs([i][j]));
//         }
//         printf("\n");
//     }

//     printf("The solution is: \n");
//     for(int i=0; i<n; i++){
//         printf("x%d : %f",i+1,backs[i]);
//     }
// }

// // Gauss Jordan
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the size of row: ");
//     scanf("%d",&n);

//     float a[n][n+1];

//     printf("Enter the matrix: \n");
//     for(int i=0 ;i<n; i++){
//         for(int j=0; j<=n ;j++){
//             scanf("%f",&a[i][j]);
//         }
//     }

//     for(int i=0 ;i<n ;i++){
//         for(int j=0 ;j<n ;j++){
//             if(j!=i){
//                 float ratio= a[j][i]/a[i][i];
//                 for(int k=0 ;k<=n; k++){
//                     a[j][k]= a[j][k] - (ratio * a[i][k]);
//                 }
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         float d= a[i][i];
//         for(int j=0 ;j<=n ;j++){
//             a[i][j]= a[i][j]/d;
//         }
//     }

//     printf("\nIdentity matrix: \n");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=n; j++){
//             printf("%0.2f ",fabs(a[i][j]));
//         }
//         printf("\n");
//     }

//     printf("The solution is: \n");
//     for(int i=0; i<n; i++){
//         printf("x%d : %f",i+1, a[i][n]);
//     }
// }

//Newton FORWARD Interpolation
// #include<stdio.h>
// int main(){
//     int n,fact;
//     float x,u,u1,y;
//     printf("Enter the number of observations: ");
//     scanf("%d",&n);
//     float a[n][n+1];
//     printf("\nEnter the values of x: ");
//     for(int i=0; i<n; i++){
//         scanf("%f",&a[i][0]);
//     }
//     printf("\nEnter the valus of y: ");
//     for(int i=0; i<n; i++){
//         scanf("%f",&a[i][1]);
//     }

//     printf("Enter the value of x for which y is to be found: ");
//     scanf("%f",&x);

//     for(int j=2; j<=n;j++){
//         for(int i=0; i<n-j+1; i++){
//             a[i][j]= a[i+1][j-1]- a[i][j-1];
//         }
//     }

//     printf("\n Difference table is: \n");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=n-i; j++){
//             printf("%0.2f  ",a[i][j]);
//         }
//         printf("\n");
//     }

//     u= (x- a[0][0])/(a[1][0]-a[0][0]);
//     u1=u;
//     fact=1;
//     y=a[0][1];

//     for(int i=2; i<=n; i++){
//         y=y+ (u1*a[0][i])/fact;
//         fact= fact*i;
//         u1= u1*(u-(i-1));
//     }

//     printf("The value of y at x = %0.2f is : %0.2f",x,y);
// }
//--------------------------------------------------------------------------------

// // Euler's Method
// #include<stdio.h>
// float func(float x, float y){
//     return (y-x)/(y+x);
// }
// int main(){
//     float a,b,h,x;
//     int n;
//     printf("Enter the inital values of x0 and y0: ");
//     scanf("%f %f",&a,&b);

//     printf("Enter the value of x for which y is to be found: ");
//     scanf("%f",&x);

//     printf("Enter the number of iterations: \n");
//     scanf("%d",&n);

//     h=(x-a)/n;
//     float y=0.0f;
//     for(int i=0 ;i<n; i++){
//         y= b+ h*func(a,b);
//         b=y;
//         a+=h;

//         printf("\nThe value of y%d is: %f",i+1, y);
//     }

//     printf("\nThe value of y at x: %f",y);

// }

//----------------------------------------------------------------------------

//Lagrange Interpollation

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of observations: ");
    scanf("%d",&n);

    float x[n],y[n], sum=0, term,X;
    printf("Enter the values of x: ");
    for(int i=0; i<n; i++){
        scanf("%f",&x[i]);
    }

    printf("\nEnter the values of y : ");
    for(int i=0; i<n ;i++){
        scanf("%f",&y[i]);
    }

    printf("Enyter the value of x for which y is to be found: ");
    scanf("%f",&X);

    for(int i=0; i<n ;i++){
        term=1;
        for(int j=0; j<n; j++){
            if(j!=i){
                term = term* ((X-x[j])/(x[i]-x[j]));
            }
        }
        sum= sum + term*y[i];
    }

    printf("Value at x%f is: %f",X,sum);
}