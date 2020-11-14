#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);

int main()
{
    int number, result=0;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));

    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    /* Write your code here */
    int i,j, total,prod;
    total = 0;
    prod = 1;
    for (i=1;i<=num;i++) {
        for (j=1;j<i;j++) {
            if (i%j==0)
                total += j;
        };
        if (total==i) {
            printf("Perfect num: %d\n", i);
            prod *= i;
        };
        total=0;
    };
    return prod;
}
void perfectProd2(int num, int *prod)
{
    /* Write your code here */
    int i,j, total;
    total = 0;
    *prod = 1;
    for (i=1;i<=num;i++) {
        for (j=1;j<i;j++) {
            if (i%j==0)
                total += j;
        };
        if (total==i) {
            printf("Perfect num: %d\n", i);
            *prod *= i;
        };
        total=0;
    };
}
