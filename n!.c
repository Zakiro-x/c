#include <stdio.h>
//  n�Ľ׳�
/*
int main() // ѭ��
{
    int n = 0,i = 1;
    int ret = 1;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
          ret *= i;
    }
    printf("n�Ľ׳���:%d",ret);
}
*/
int Fac(int num)  //  �ݹ�
{
    int ret = 1;
    if(num>0)
    {
        ret = num * Fac(num-1);
    return ret;
    }
    else
        return 1;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("n�Ľ׳���:%d",Fac(n));
}
