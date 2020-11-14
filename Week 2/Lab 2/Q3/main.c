#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
   int number, result=0;
   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("square1(): %d\n", square1(number));
   square2(number, &result);
   printf("square2(): %d\n", result);
   return 0;
}
int square1(int num)
{
   /* Write your code here */
   int result = 0;
   while (num > 0) {
    result += (2*num - 1);
    num--;
   };
   return result;
}
void square2(int num, int *result)
{
   /* Write your code here */
   while (num > 0) {
    *result += (2*num - 1);
    num--;
   }
}
