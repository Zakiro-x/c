#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void zifujinzita(char ch) {
    int rows = ch - 'A' + 1;
    int spaces = rows - 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i; k++) {
            printf("%c", 'A' + k);
        }

        for (int l = i - 1; l >= 0; l--) {
            printf("%c", 'A' + l);
        }

        printf("\n");
        spaces--;
    }
}

int main() {
    char a;
    scanf("%c", &a);
    zifujinzita(a);

    return 0;
}