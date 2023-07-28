#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <conio.h>
main() {
    float i=20,n;
    scanf("%f",&n);
    getchar();
    while(i>0)
    {
        Sleep(1);
        printf("%.2f\n", i);
        i-=0.01;
        if(_kbhit())
            {
                if(_getch()=='\n')
                {
                    break;
                }
                }
            }


    return 0;
}
