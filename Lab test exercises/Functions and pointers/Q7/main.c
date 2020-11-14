#include <stdio.h>
void computeTotal(int numOfLines);

int main()
{
    int numOfLines;
    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}

void computeTotal(int numOfLines)
{
    /* Write your code here */
    int sum, num, i;
    sum = 0;
    for (i=1;i<=numOfLines;i++) {
        printf("Enter line %d:\n", i);
        getchar();
        while (1) {
            if (getchar() == '\n')
                break;
            else {
                scanf("%d", &num);
                sum += num;
            };
        }
        printf("Total: %d\n", sum);
        sum = 0;
    };
}
