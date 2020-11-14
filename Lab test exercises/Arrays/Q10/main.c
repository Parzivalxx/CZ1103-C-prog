#include <stdio.h>
#define SIZE 100

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);

int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}

void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    /* Write your code here */
    int i, j, numnow, count;
    for (i=0;i<rowSize;i++) {
        numnow = 999;
        for (j=0;j<colSize;j++) {
            if (data[i][j] != numnow) {
                if (numnow == 999) {
                    numnow = data[i][j];
                    count = 1;
                }
                else {
                    printf("%d %d ", numnow, count);
                    numnow = data[i][j];
                    count = 1;
                };
            }
            else
                count += 1;
        }
        printf("%d %d\n", numnow, count);
    };
}
