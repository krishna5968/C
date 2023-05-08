//WAP to subtract time ussing functions im C.

#include <stdio.h>

void subtractTime(int h1, int m1, int s1, int h2, int m2, int s2, int *diff_h, int *diff_m, int *diff_s) {
    int time1 = h1 * 3600 + m1 * 60 + s1;
    int time2 = h2 * 3600 + m2 * 60 + s2;
    int diff_sec = time1 - time2;
    if (diff_sec < 0) {
        diff_sec += 24 * 3600;
    }
    *diff_h = diff_sec / 3600;
    *diff_m = (diff_sec % 3600) / 60;
    *diff_s = diff_sec % 60;
}

int main() {
    int h1, m1, s1, h2, m2, s2, diff_h, diff_m, diff_s;
    printf("Enter first time\n");
    printf("Hours: ");
    scanf("%d", &h1);
    printf("Minutes: ");
    scanf("%d", &m1);
    printf("Seconds: ");
    scanf("%d", &s1);
    printf("Enter second time\n");
    printf("Hours: ");
    scanf("%d", &h2);
    printf("Minutes: ");
    scanf("%d", &m2);
    printf("Seconds: ");
    scanf("%d", &s2);
    subtractTime(h1, m1, s1, h2, m2, s2, &diff_h, &diff_m, &diff_s);
    printf("The difference between times is %d hours %d minutes %d seconds", diff_h, diff_m, diff_s);
    return 0;
}
