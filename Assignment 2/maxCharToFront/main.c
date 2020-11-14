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
    int size, i, j, max;
    char tmp;
    size = strlen(str);
    if (size == 0);
    else {
        max = 0;
        for (i=0;i<size;i++) {
            if (str[i] > str[max])
                max = i;
        };
        tmp = str[max];
        for (j=max;j>0;j--) {
            str[j] = str[j-1];
        };
        str[0] = tmp;
    };
}
