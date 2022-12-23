#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of observations: ");
    scanf("%d",&n);
    float x[n],y[n];

    float sumx=0, sumy=0, sumxy=0, sumx2=0;
    for(int i=0; i<n; i++){
        printf("Enter the value of x%d and y%d: ",i+1,i+1);
        scanf("%f%f",&x[i],&y[i]);
        sumx+= x[i];
        sumy+= y[i];
        sumxy+= x[i]*y[i];
        sumx2+= x[i]*x[i];
    }

    float arr[2][3];
    arr[0][0]= n;
    arr[0][1]= sumx;
    arr[0][2]= sumy;
    arr[1][0]= sumx;
    arr[1][1]= sumx2;
    arr[1][2]= sumxy;

    // Using gauss jordan
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(j!=i){
                float ratio= arr[j][i]/arr[i][i];
                for(int k=0 ;k<3; k++){
                    arr[j][k]= arr[j][k]-(ratio * arr[i][k]);
                }
            }
        }
    }
 
     printf("\nMatrix formed as:\n");
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%0.2f  ",arr[i][j]);
        }
        printf("\n");
     }

     float a=(arr[0][2]/arr[0][0]);
     float b=(arr[1][2]/arr[1][1]);

     printf("\nThe equation of line is y=%0.2f + %0.2fx\n",a,b);

}