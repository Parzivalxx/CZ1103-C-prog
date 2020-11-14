#include <stdio.h>
#include <string.h>

void insertChar(char *str1, char *str2, char ch);

int main()
{
    char a[80],b[80];
    char ch, *p;

    printf("Enter a string: \n");
    fgets(a, 80, stdin);
    if (p=strchr(a,'\n'))
        *p = '\0';
    printf("Enter a character to be inserted: \n");
    ch = getchar();
    insertChar(a,b,ch);
    printf("insertChar(): ");
    puts(b);
    return 0;
}

void insertChar(char *str1, char *str2, char ch)
{
    /* Write your code here */
    int count;
    count = 0;
    while (*str1 != '\0') {
        *str2++ = *str1++;
        count++;
        if (count == 3) {
            *str2++ = ch;
            count = 0;
        };
    }
    *str2 = '\0';
}

