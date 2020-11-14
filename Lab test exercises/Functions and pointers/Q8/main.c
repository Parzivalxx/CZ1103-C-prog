#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);

int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}

int sumSqDigits1(int num)
{
    /* Write your code here */
    int res, temp;
    temp = num;
    while (temp != 0) {
        res += pow((temp % 10), 2);
        temp /= 10;
    }
    return res;
}

void sumSqDigits2(int num, int *result)
{
    /* Write your code here */
    *result = 0;
    while (num != 0) {
        *result += pow((num % 10), 2);
        num /= 10;
    }
}
