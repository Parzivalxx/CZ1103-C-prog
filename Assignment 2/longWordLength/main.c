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
    int len, i, max, c;
    c = 0;
    max = 0;
    len = strlen(s);
    for (i=0;i<len;i++) {
        if ((s[i] != ' ') && (isalpha(s[i]))) {
            c++;
        } else {
            if (c>max)
                max = c;
                c = 0;
        };
    };
    if (c>max)
        max = c;
    return max;
}

