#include <stdio.h>
int main()
{
    int p,q;
    while(scanf("%d",&p)!=EOF)
    {
        scanf("%d",&q);
        if(p+q==2)//��ȡ
            printf("1 ");
        else
            printf("0 ");
        if(p+q==0)//��ȡ
            printf("0 ");
        else
            printf("1 ");
        if(p==1 && q==0)//�̺�
            printf("0 " );
        else
            printf("1 ");
        if(p==q)//��ֵ
            printf("1 ");
        else
            printf("0 ");
        if(p==1 && q==1)//���
            printf("0 ");
        else
            printf("1 ");
        if(p==0 && q==0)//���
            printf("1 ");
        else
            printf("0 ");
        printf("\n");
    }
}
