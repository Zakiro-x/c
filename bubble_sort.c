//����
#include <stdio.h>

//ð������
void bubble_sort(int sz,int arr[])
{
    int i = 0 , k = 0;
            int flag =1;
    while(sz > 0)
    {

        for(i = 0;i < sz-1;i++)
        {
            if(arr[i] >arr[i+1])
            {
                k = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = k;
                flag = 0;
            }
        }
        sz--;
        if(flag == 1)
        break;
    }
}

int main()
{
    int sz;
    int ar[] = {1,2,3,4,1,2,};
    sz = sizeof(ar)/sizeof(ar[0]);
    //�ü�����̲������ڴ��κ�����
    bubble_sort(sz,ar);//���鴫�Σ�ֻ����Ԫ�ص�ַ��
    int x = 0;
    while(x < sz)
    {
    printf("%d ",ar[x]);
    x++;
    }
}
