#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
main() {
    float i,n;
    scanf("%f",&i);
    getchar();
    while(getchar()!='\n' && i>=0)
    {
        Sleep(1);
        printf("%.2f\n", i);
        i-=0.01;

    }
    return 0;
}
