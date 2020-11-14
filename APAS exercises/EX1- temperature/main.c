#include <stdio.h>
int main()
{
    float fahrenheit, celsius;  // declare variables

    printf("Enter the temperature in degree F: \n");
    scanf("%f", &fahrenheit);

    /* Write your program code here */
    celsius = (fahrenheit - 32) * 5/9;

    printf("Converted degree in C: %.2f\n", celsius);
    return 0;
}
