#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);

int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}

int extEvenDigits1(int num)
{
    /* Write your code here */
    int res, i;
    res = 0;
    i = 0;
    int val;
    while (num != 0) {
        val = num%10;
        if (val%2==0) {
            res += val * pow(10,i);
            i += 1;
        };
        num /= 10;
    };
    if (res==0)
        return -1;
    return res;
}

void extEvenDigits2(int num, int *result)
{
    /* Write your code here */
    int i;
    *result = 0;
    i = 0;
    int val;
    while (num != 0) {
        val = num%10;
        if (val%2==0) {
            *result += val * pow(10,i);
            i += 1;
        };
        num /= 10;
    };
    if (*result==0)
        *result = -1;
}
