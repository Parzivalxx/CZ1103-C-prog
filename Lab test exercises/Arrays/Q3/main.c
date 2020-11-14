#include <stdio.h>

void findMinMax1D(int ar[], int size, int *min, int *max);

int main()
{
    int ar[40];
    int i, size;
    int min, max;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    findMinMax1D(ar, size, &min, &max);
    printf("min = %d; max = %d\n", min, max);
    return 0;
}

void findMinMax1D(int ar[], int size, int *min, int *max)
{
    /* Write your code here */
    *min = ar[0];
    *max = ar[0];
    int i;
    for (i=0;i<size;i++) {
        if (ar[i] > *max)
            *max = ar[i];
        if (ar[i] < *min)
            *min = ar[i];
    };
}
