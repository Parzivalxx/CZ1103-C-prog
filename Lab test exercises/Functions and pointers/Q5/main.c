#include <stdio.h>
void printPattern2(int height);

int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern2(): \n");
    printPattern2(height);
    return 0;
}
void printPattern2(int height)
{
    /* Write your code here */
    int i, j, evenleft;
    for (i=1;i<=height;i++) {
        if (i%2==1) {
            printf("A");
            evenleft = (i-1)/2;
            for (j=1;j<=evenleft;j++) {
                printf("BA");
            };
            printf("\n");
        }
        else {
            evenleft = i/2;
            for (j=1;j<=evenleft;j++) {
                printf("BA");
            };
            printf("\n");
        };
    }
}
