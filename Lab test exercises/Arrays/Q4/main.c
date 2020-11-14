#include <stdio.h>

void specialNumbers1D(int ar[], int num, int *size);

int main()
{
    int a[20],i,size=0,num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}

void specialNumbers1D(int ar[], int num, int *size)
{
    /* Write your code here */
    int i, j, cubed, temp;
    cubed = 0;
    j = 0;
    for (i=100;i<=num;i++) {
        temp = i;
        while (temp != 0) {
            cubed += pow(temp%10,3);
            temp /= 10;
        };
        if (cubed == i) {
            ar[j] = i;
            j++;
        };
        cubed = 0;
    };
    *size = j;
}
