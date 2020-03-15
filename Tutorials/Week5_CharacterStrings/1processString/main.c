#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
 char str[50], *p;
 int totVowels, totDigits;
 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 processString(str, &totVowels, &totDigits);
 printf("Total vowels = %d\n", totVowels);
 printf("Total digits = %d\n", totDigits);
 return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
 /* Write your program code here */
 int i, size;
 *totDigits=0;
 *totVowels=0;
 i=0;
 size=0;
 while (str[i] != '\0') {
    size++;
    i++;
 }
 for (i=0;i<size;i++) {
    if (str[i] == 'a' || str[i] == 'A' ||
        str[i] == 'e' || str[i] == 'E' ||
        str[i] == 'o' || str[i] == 'O' ||
        str[i] == 'i' || str[i] == 'I' ||
        str[i] == 'u' || str[i] == 'U') {
            (*totVowels)++;
        }
    else if (str[i] >= '0' && str[i] <= '9') {
        (*totDigits)++;
    }
 }
}
