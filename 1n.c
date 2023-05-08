#include <stdio.h>

void addDistance(int km1, int m1, int km2, int m2, int *sum_km, int *sum_m) {
    int total_m = m1 + m2;
    *sum_m = total_m % 1000;
    *sum_km = km1 + km2 + (total_m / 1000);
}

int main() {
    int km1, m1, km2, m2, sum_km, sum_m;
    printf("Enter first distance\n");
    printf("Kilometers: ");
    scanf("%d", &km1);
    printf("Meters: ");
    scanf("%d", &m1);
    printf("Enter second distance\n");
    printf("Kilometers: ");
    scanf("%d", &km2);
    printf("Meters: ");
    scanf("%d", &m2);
    addDistance(km1, m1, km2, m2, &sum_km, &sum_m);
    printf("The sum of distances is %d kilometers %d meters", sum_km, sum_m);
    return 0;
}
