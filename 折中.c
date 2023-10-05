#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    int i=0,j=0,w[20][20],sum=0;
        int a[20][20];
    while(scanf("%d",&N)!=EOF)
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                scanf("%d",&w[i][j]);
                sum+=w[i][j];
            }
        }
        double g=(double)sum/(N*N);
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                a[i][j]=fabs(g-w[i][j]);
            }
        }
        int min=a[0][0];
        int row=0,col=0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(a[i][j]<min)
                    {
                        min=a[i][j];
                        row=i;
                        col=j;
                    }
            }
        }
        row++;
        col++;
        printf("%.2lf %d %d\n",g,row,col);
        sum=0;

    }

}
