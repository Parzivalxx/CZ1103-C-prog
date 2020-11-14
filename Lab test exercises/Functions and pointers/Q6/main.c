#include <stdio.h>
void printPattern3(int height);

int main()
{
    int height;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("printPattern3(): \n");
    printPattern3(height);
    return 0;
}

void printPattern3(int height)
{
    /* Write your code here */
    int i, j, k;
    for (i=1;i<=height;i++) {
        j = i;
        k = i;
        while (j>0) {
            if (k==10)
                k=0;
            printf("%d", k);
            k++;
            j--;
        };
        printf("\n");
    };
}
