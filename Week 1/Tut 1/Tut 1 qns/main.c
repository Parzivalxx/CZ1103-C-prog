#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int i, j, m, n;
//    float f, g;
//    i = j = 2;
//    m = n = 5;
//    f = 1.2;
//    g = 3.4;
//    printf("%f", f+10*20);
//    #define number*2;
    int num1, num2;
    printf("Input number 1: ");
    scanf("%d", &num1);
    printf("Input number 2: ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping, num1 = %d, num2 = %d", num1, num2);
    return 0;
}
