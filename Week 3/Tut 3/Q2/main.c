#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, num, a[10] = {0};
    printf("Input number of integers: ");
    scanf("%d", &n);
    while (n > 0) {
        num = rand() % 100;
        if (num >= 0 && num < 10) {
            a[0]++;
        }
        else if (num >= 10 && num < 20) {
            a[1]++;
        }
        else if (num >= 20 && num < 30) {
            a[2]++;
        }
        else if (num >= 30 && num < 40) {
            a[3]++;
        }
        else if (num >= 40 && num < 50) {
            a[4]++;
        }
        else if (num >= 50 && num < 60) {
            a[5]++;
        }
        else if (num >= 60 && num < 70) {
            a[6]++;
        }
        else if (num >= 70 && num < 80) {
            a[7]++;
        }
        else if (num >= 80 && num < 90) {
            a[8]++;
        }
        else if (num >= 90 && num < 100) {
            a[9]++;
        };
        n--;
    };
    printf("0-9 | ");
    for (i=0;i<a[0];i++) {
        printf("*");
    };
    printf("\n");
    printf("10-19 | ");
    for (i=0;i<a[1];i++) {
        printf("*");
    };
    printf("\n");
    printf("20-29 | ");
    for (i=0;i<a[2];i++) {
        printf("*");
    };
    printf("\n");
    printf("30-39 | ");
    for (i=0;i<a[3];i++) {
        printf("*");
    };
    printf("\n");
    printf("40-49 | ");
    for (i=0;i<a[4];i++) {
        printf("*");
    };
    printf("\n");
    printf("50-59 | ");
    for (i=0;i<a[5];i++) {
        printf("*");
    };
    printf("\n");
    printf("60-69 | ");
    for (i=0;i<a[6];i++) {
        printf("*");
    };
    printf("\n");
    printf("70-79 | ");
    for (i=0;i<a[7];i++) {
        printf("*");
    };
    printf("\n");
    printf("80-89 | ");
    for (i=0;i<a[8];i++) {
        printf("*");
    };
    printf("\n");
    printf("90-99 | ");
    for (i=0;i<a[9];i++) {
        printf("*");
    };
    printf("\n");
}
