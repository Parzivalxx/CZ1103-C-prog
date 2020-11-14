#include <stdio.h>
#include <string.h>

int countWords(char *s);

int main()
{
    char str[50], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n'))
        *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}

int countWords(char *s)
{
    /* Write your code here */
    int numofWords, addWord;
    numofWords = 0;
    addWord = 0;
    while (*s != '\0') {
        if ((isalpha(*s) || (isdigit(*s))) && (addWord == 0)) {
            numofWords += 1;
            addWord = 1;
        }
        else if ((isalpha(*s) == 0) && (isdigit(*s) == 0)) {
            addWord = 0;
        };
        *s++;
    };
    return numofWords;
}

