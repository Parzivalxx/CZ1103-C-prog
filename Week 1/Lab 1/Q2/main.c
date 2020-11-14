#include <stdio.h>

int main()
{
   /* Write your code here */
   float avg, sum = 0;
   int lines, elem, num = 0;
   printf("Enter number of lines: ");
   scanf("%d", &lines);
   for (int linenum = 1; linenum <= lines; linenum++) {
    sum = 0;
    num = 0;
    printf("Enter line %d (end with -1): ", linenum);
    scanf("%d", &elem);
    while (elem != -1) {
        sum += elem;
        num += 1;
        scanf("%d", &elem);
    };
    if (num == 0) {
        avg = 0;
    } else {
        avg = sum/num;
    };
    printf("Average = %.2f\n", avg);
   }
//    printf("%c", 'A');
//    printf("%c", 65);
//    printf("%c", 41);
//    printf("%c", 0101);
//    double A = 373737.0;
//    double B;
//    B = A * A * A + 0.37/A - A * A * A - 0.37/A;
//    printf("The value of B is %f.\n", B);
   return 0;
}
