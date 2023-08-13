#include <stdio.h>
//  n的阶乘
/*
int main() // 循环
{
    int n = 0,i = 1;
    int ret = 1;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
          ret *= i;
    }
    printf("n的阶乘是:%d",ret);
}
*/
int Fac(int num)  //  递归
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
    printf("n的阶乘是:%d",Fac(n));
}
