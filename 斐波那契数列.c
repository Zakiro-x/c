 //쳲���������
# include <stdio.h>

int Fib1(int num)  // �ݹ�   Ч�ʵ�
{
    if(num <= 2)
    {
        return 1;
    }
    else
    {
        return Fib1(num-1) + Fib1(num-2);
    }
}

int Fib2(int num)  //  ѭ��  Ч�ʸ�
{
    int a=1,b=1,c=1;
    while(num>2)
    {
        c=a+b;
        a = b;
        b = c;
        num--;
    }
    return c;

}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib2(n);
    printf("%d",ret);
}
