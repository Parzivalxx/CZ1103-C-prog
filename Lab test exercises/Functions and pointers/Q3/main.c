#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result=-1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    /* Write your code here */
    float total;
    int pow;
    pow = abs(p);
    total = 1;
    while (pow>0) {
        total *= num;
        pow--;
    };
    if (p>0)
        return total;
    return 1/total;
}
void power2(float num, int p, float *result)
{
    /* Write your code here */
    *result = 1;
    int pow;
    pow = abs(p);
    while (pow>0) {
        *result *= num;
        pow--;
    };
    if (p<0)
        *result = 1/(*result);
}
