#include <stdio.h>
#include <string.h>

void maxCharToFront(char *str);

int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}

void maxCharToFront(char *str)
{
    /* Write your code here */
    int i,j,maxidx;
    char max;
    i = 0;
    while (*(str+i) != '\0') {
        if (*(str+i) > max) {
            max = *(str+i);
            maxidx = i;
        };
        i++;
    };
    for (j=maxidx-1;j>=0;j--) {
        *(str+j+1) = *(str+j);
    };
    *(str+0) = max;
}
