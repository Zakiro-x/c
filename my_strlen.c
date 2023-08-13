#include <stdio.h>
/*
int my_strlen(char *p)
{
    if(*p !='\0')
    {
        return 1+my_strlen(p+1);
    }
    else
        return 0;
}
*/

int my_strlen(char *p)
{
    int count = 0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}


int main()
{
    char arr[] = "bitnjk";
    int len = my_strlen(arr);
    printf("len = %d\n",len);
}
