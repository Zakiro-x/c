#include <stdio.h>
int main()
{
    int p,q;
    while(scanf("%d",&p)!=EOF)
    {
        scanf("%d",&q);
        if(p+q==2)//合取
            printf("1 ");
        else
            printf("0 ");
        if(p+q==0)//析取
            printf("0 ");
        else
            printf("1 ");
        if(p==1 && q==0)//蕴涵
            printf("0 " );
        else
            printf("1 ");
        if(p==q)//等值
            printf("1 ");
        else
            printf("0 ");
        if(p==1 && q==1)//与非
            printf("0 ");
        else
            printf("1 ");
        if(p==0 && q==0)//或非
            printf("1 ");
        else
            printf("0 ");
        printf("\n");
    }
}
