#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time subtractTime(struct Time time1, struct Time time2) {
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int differenceSeconds = totalSeconds1 - totalSeconds2;
    if (differenceSeconds < 0) {
        differenceSeconds += 24 * 3600;
    }
    struct Time differenceTime = {differenceSeconds / 3600, (differenceSeconds % 3600) / 60, differenceSeconds % 60};
    return differenceTime;
}

int main() {
    struct Time time1, time2, differenceTime;
    printf("Enter first time\n");
    printf("Hours: ");
    scanf("%d", &time1.hours);
    printf("Minutes: ");
    scanf("%d", &time1.minutes);
    printf("Seconds: ");
    scanf("%d", &time1.seconds);
    printf("Enter second time\n");
    printf("Hours: ");
    scanf("%d", &time2.hours);
    printf("Minutes: ");
    scanf("%d", &time2.minutes);
    printf("Seconds: ");
    scanf("%d", &time2.seconds);
    differenceTime = subtractTime(time1, time2);
    printf("The difference between times is %d hours %d minutes %d seconds", differenceTime.hours, differenceTime.minutes, differenceTime.seconds);
    return 0;
}
