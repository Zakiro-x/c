#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    if (day > 2) {
        day -= 2;
    } else {
        if (month > 1) {
            month -= 1;
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                day = 30 + (day - 2);
            } else if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    day = 29 + (day - 2);
                } else {
                    day = 28 + (day - 2);
                }
            } else {
                day = 31 + (day - 2);
            }
        } else {
            year -= 1;
            month = 12;
            day = 31 + (day - 2);
        }
    }

    printf("%04d-%02d-%02d\n", year, month, day);

    return 0;
}
