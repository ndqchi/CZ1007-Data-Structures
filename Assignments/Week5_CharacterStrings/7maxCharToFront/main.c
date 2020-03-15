#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
 char str[80], *p;

 printf("Enter a string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("maxCharToFront(): ");
 maxCharToFront(str);
 puts(str);
 return 0;
}
void maxCharToFront(char *str)
{
 /* Write your code here */
 int i=0;
 int maxIndex =0;
 while (i<strlen(str)) {
    if (str[i] > str[maxIndex]) {
        maxIndex = i;
    }
    i++;
 }
 char temp = str[maxIndex];
 for (i=maxIndex;i>0;i--) {
    str[i] = str[i-1];
 }
 str[0] = temp;
}
