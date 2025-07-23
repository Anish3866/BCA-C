#include <stdio.h>

int main() {
    int bd, bm, by;
    int cd, cm, cy;
    int total_days = 0;

    printf("Enter your date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &bd, &bm, &by);

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &cd, &cm, &cy);

    if (by == cy) {
        if (bm == cm) {
            total_days = cd - bd;
        } else if (bm < cm) {
            total_days = (cm - bm) * 30 + (cd - bd);
        } else {
            printf("Invalid input: birth month is after current month.\n");
            return 1;
        }
    } 
    else if (by < cy) {
        int year_diff = cy - by - 1;
        int days_in_by = (12 - bm) * 30 + (30 - bd);
        int days_in_cy = (cm - 1) * 30 + cd;
        total_days = year_diff * 360 + days_in_by + days_in_cy;
    } 
    else {
        printf("Invalid input: birth year is after current year.\n");
        return 1;
    }

    printf("You have lived approximately %d days.\n", total_days);

    return 0;
}

