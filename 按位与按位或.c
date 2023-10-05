#include <stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int a[64],b[64];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]+b[i]==2)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(a[i]+b[i]==0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}
