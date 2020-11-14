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
    int minidx = 0, maxidx = 0, i, temp;
    for (i=1;i<size;i++) {
        if (ar[i] <= ar[minidx])
            minidx = i;
        else if (ar[i] >= ar[maxidx])
            maxidx = i;
    };
    temp = ar[maxidx];
    ar[maxidx] = ar[minidx];
    ar[minidx] = temp;
}
