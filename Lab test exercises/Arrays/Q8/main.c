#include <stdio.h>

void swapMinMax1D(int ar[], int size);

int main()
{
    int ar[50],i,size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}

void swapMinMax1D(int ar[], int size)
{
    /* Write your code here */
    int max, min, maxidx, minidx, i, temp;
    max = ar[0];
    min = ar[0];
    minidx = 0;
    maxidx = 0;
    for (i=0;i<size;i++) {
        if (ar[i] <= min) {
            min = ar[i];
            minidx = i;
        }
        else if (ar[i] >= max) {
            max = ar[i];
            maxidx = i;
        };
    };
    temp = ar[maxidx];
    ar[maxidx] = ar[minidx];
    ar[minidx] = temp;
}
