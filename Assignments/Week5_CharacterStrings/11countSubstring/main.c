#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
   char str[80], substr[80], *p;
   int result=INIT_VALUE;

   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   printf("Enter the substring: \n");
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0';
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);
   return 0;
}
int countSubstring(char str[], char substr[])
{
	/*edit*/
	/* Write your code here */
    int n =(int) strlen(substr);
    int m = (int) strlen(str);
    int i;
    int count=0;
    char check[n+1];
    for (i=0;i<=m-n;i++) {
        strncpy(check,str+i,n);
        check[n] = '\0';
        printf(check);
        printf("\n");
        if (strcmp(check,substr) == 0) count++;
    }
    return count;
	/*end_edit*/
}
