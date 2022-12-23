#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { 
            if(j!=i)
            { 
                float r=a[j][i]/a[i][i];
                for(int k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(r*a[i][k]);
                }
            }
        } 
    } 
    for(int i=0;i<n;i++)
    {
        float d=a[i][i];
        for(int j=0;j<=n;j++)
        {
            a[i][j]=a[i][j]/d;
            
        }
    }
    printf("Identity Matrix generated is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%6.0f ",fabs(a[i][j]));
        } 
        printf("\n");
    }

    printf("The Values of unknowns are:\n");
    for(int i=0;i<n;i++)
        printf("x%d: %6.0f\n",i+1,a[i][n]);

   
    return 0;
}