//�жϴ�С���ֽ���
#include <stdio.h>
int main()
{
    int a = -20;
    char b = (char) a;
    char* pc = (char*) &a;
    if( b == *pc)
        printf("С���ֽ���");
    else
        printf("����ֽ���");
}
