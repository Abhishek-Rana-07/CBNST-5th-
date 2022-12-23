#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of observations: ");
    scanf("%d",&n);
    float x[n],y[n];

    float sy=0,sx2=0, sx=0, sxy=0, sx3=0, sx2y=0 ,sx4=0;

    for(int i=0; i<n; i++){
        printf("Enter the value of x%d and y%d: ",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sy+= y[i];
        sx2+= (x[i]*x[i]);
        sx+= x[i];
        sxy+= (x[i]*y[i]);
        sx3+= (x[i]*x[i]*x[i]);
        sx2y+= (x[i]*x[i]*y[i]);
        sx4+= (x[i]*x[i]*x[i]*x[i]);
    }

    float a[3][4];
    a[0][0]=sx2;
    a[0][1]=sx;
    a[0][2]=n;
    a[0][3]=sy;
    a[1][0]=sx3;
    a[1][1]=sx2;
    a[1][2]=sx;
    a[1][3]=sxy;
    a[2][0]=sx4;
    a[2][1]=sx3;
    a[2][2]=sx2;
    a[2][3]=sx2y;

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(j!=i){
                float ratio= a[j][i]/a[i][i];
                for(int k=0; k<4; k++){
                    a[j][k]= a[j][k]- (ratio*a[i][k]);
                }
            }
        }
    }

    printf("\nMatrix formed is: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4;  j++){
            printf("%0.2f ",a[i][j]);
        }
        printf("\n");
    }

    float a1=a[0][3]/a[0][0];
    float b=a[1][3]/a[1][1];
    float c=a[2][3]/a[2][2];

    printf("The equation of line is:  y= %0.2f x^2 + %0.2f x + %0.2f",a1,b,c);
}