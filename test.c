//判断大小端字节序
#include <stdio.h>
int main()
{
    int a = -20;
    char b = (char) a;
    char* pc = (char*) &a;
    if( b == *pc)
        printf("小端字节序");
    else
        printf("大端字节序");
}
