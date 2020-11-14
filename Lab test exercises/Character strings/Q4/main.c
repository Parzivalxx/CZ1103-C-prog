#include <stdio.h>
#include <string.h>

int longWordLength(char *s);

int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}

int longWordLength(char *s)
{
    /* Write your code here */
    int max, temp;
    max = 0;
    temp = 0;
    while (*s != '\0') {
        if (isalpha(*s)) {
            temp += 1;
            if (temp > max)
                max = temp;
        }
        else
            temp = 0;
        *s++;
    };
    return max;
}

