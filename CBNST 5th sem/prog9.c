#include<stdio.h>
#include<math.h>
#include<stdbool.h>
float X1(float x2){
    return((11- x2)/3);
}
float X2(float x1) 
{
    return((16-2*(x1))/5);
}
int n;
float a[5][5];
bool check()
{
    for(int i=0;i<n;i++)
    {
        float s=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                s+=fabs(a[i][j]);
        } 
        if(fabs(a[i][i])>=s)
            continue;
        else
            return false;
    } 
    return true;
}
int main()
{
    float er,x1=0,x2=0,y1,y2;
    int flag=0,it=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    a[n][n+1];
    
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
        
    } 
    if(!check())
    {
        printf("The Coefficient matrix is not Diagnol Dominant!!! Plaese Try Again\n");
        
    }
    else
    {
       
        printf("Enter the allowed error: ");
        scanf("%f",&er);
        do
        {
            y1=X1(x2);
            y2=X2(y1);
            if(fabs(y1-x1)<er && fabs(y2-x2)<er)
            {
                break;
                flag=1;
            } 
            else{
                x1=y1;
                x2=y2;
                printf("%d Approximation The values of unknowns are:\n",it);
                printf("x1: %6.4f   x2: %6.4f    \n",x1,x2);
            }
            it++;
        } while (flag!=1);

        printf("\nThe solution are:\nx1: %6.4f\nx2: %6.4f\n",round(x1),round(x2));
        
    }
    return 0;
}