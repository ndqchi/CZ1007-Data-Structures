#include <stdio.h>
int main()
{
 char ch;
 printf("Enter a character: \n");
 scanf("%c", &ch);
 /* Write your code here */
 if (ch >= 'a' && ch <= 'z')
    printf("Lower case letter\n");
 else if (ch >= 'A' && ch<= 'Z')
    printf("Upper case letter\n");
 else if (ch >= '0' && ch <= '9')
    printf("Digit");
 else
    printf("Other character");
 return 0;
}
