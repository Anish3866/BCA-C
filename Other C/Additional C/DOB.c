#include <stdio.h>

int main() {
    int birth_day, birth_month, birth_year;
    int curr_day, curr_month, curr_year;
    int days = 0, i;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter your Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &curr_day, &curr_month, &curr_year);
    if (birth_month <= 12 && birth_day <= month_days[birth_month-1]) {
        days = month_days[birth_month-1] - birth_day + 1;
        i = birth_month;
        while (i < 12) {
            days = days + month_days[i];
            i = i + 1;
        }
        i = birth_year + 1;
        while (i < curr_year) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                days = days + 366;
            } else {
                days = days + 365;
            }
            i = i + 1;
        }
        if (curr_month <= 12 && curr_day <= month_days[curr_month-1]) {
            i = 0;
            while (i < curr_month - 1) {
                days = days + month_days[i];
                i = i + 1;
            }
            days = days + curr_day - 1;
            if (((curr_year % 4 == 0 && curr_year % 100 != 0) || (curr_year % 400 == 0)) && curr_month > 2) {
                days = days + 1;
            }
            if (((birth_year % 4 == 0 && birth_year % 100 != 0) || (birth_year % 400 == 0)) && birth_month <= 2) {
                days = days + 1;
            }
            printf("You have lived %d days.\n", days);
        } else {
            printf("Invalid current date.\n");
        }
    } else {
        printf("Invalid birth date.\n");
    }

    return 0;
}
