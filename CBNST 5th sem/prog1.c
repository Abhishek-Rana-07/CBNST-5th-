#include<stdio.h>
#include<math.h>
int main(){
    float t_val= sqrt(2);
    float app_val;
    printf("Enter the approximate value: ");
    scanf("%f",&app_val);
    float abs_err, rel_err, per_err;
    abs_err= fabs(t_val- app_val);
    rel_err= abs_err/t_val;
    per_err= rel_err*100;

    printf("\n Absolute error: %f\n Relative error: %f\n Percentage error: %f\n",abs_err,rel_err,per_err);
}