#include <stdio.h>
#include <string.h>

void processString(char *str, int *totVowels, int *totDigits);

int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}

void processString(char *str, int *totVowels, int *totDigits)
{
    /* Write your program code here */
    *totVowels = 0;
    *totDigits = 0;
    while (*str != '\0') {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') ||(*str == 'I') ||(*str == 'O') ||(*str == 'U'))
            *totVowels += 1;
        else if (isdigit(*str))
            *totDigits += 1;
        *str++;
    }
}
