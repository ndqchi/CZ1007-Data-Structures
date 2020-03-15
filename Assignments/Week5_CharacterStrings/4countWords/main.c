#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
 char str[50], *p;
 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("countWords(): %d", countWords(str));
 return 0;
}
int countWords(char *s)
{
 /* Write your code here */
 int count = 1;

    if (strlen(s)==0)
    {
        return 0;
    }

    while(*s)
    {
        if (isspace(*s))
        {
            count++;
        }
        s++;
    }
    return count;
}
