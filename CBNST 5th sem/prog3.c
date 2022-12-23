#include<stdio.h>
#include<math.h>
float func(float a){
    return a*a*a -(5*a) +1;
}
float func2(float a, float b){
    return (a-((b-a)/(func(b)-func(a)))*func(a));
}

int main(){
    printf("For equation: x^3 - 5x +1");
    float a,b,x,error;
    scanf("%f%f",&a,&b);
    float f1,f2;

    if((f1=func(a))*(f2=func(b)) < 0){
        printf("Root lies between a and b\n");
        float p;
        scanf("%f",&error);
        int count=0;
        while(1){
            count++;
            p=func2(a,b);
            x=func(p);
            printf("%d iteration %f is %f \n",count,p,x);

            if(fabs(x)<=error){
                break;
            }

            if(x<0){
                if(f1<0){
                    f1=x;
                    a=p;
                }
                else{
                    f2=x;
                    b=p;
                }
            }
            else{
                if(f1>0){
                    f1=x;
                    a=p;
                }
                else{
                    f2=x;
                    b=p;
                }
            }
        }
    }

    else{
        printf("Wrong \n");
    }
}