#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);

int main()
{
    int num, result=999;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("reverseDigits1(): %d\n", reverseDigits1(num));
    reverseDigits2(num, &result);
    printf("reverseDigits2(): %d\n", result);
    return 0;
}

int reverseDigits1(int num)
{
    /* Write your code here */
    int reversednum;
    reversednum = 0;
    while (num != 0) {
        reversednum = reversednum*10+(num%10);
        num /= 10;
    };
    return reversednum;
}

void reverseDigits2(int num, int *result)
{
    /* Write your code here */
    *result = 0;
    while (num != 0) {
        *result = (*result)*10+(num%10);
        num /= 10;
    };
}
