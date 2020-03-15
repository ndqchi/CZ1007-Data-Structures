#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main()
{
 char str1[50],str2[50],str3[50];

 printf("Enter str1: \n");
 scanf("%s",str1);
 printf("Enter str2: \n");
 scanf("%s",str2);
 strIntersect(str1, str2, str3);
 if (*str3 == '\0')
 printf("strIntersect(): null string\n");
 else
 printf("strIntersect(): %s\n", str3);
 return 0;
}
void strIntersect(char *str1, char *str2, char *str3)
{
 /* Write your code here */
 int str1_c =0, str2_c=0, str3_c=0;
 char temp;

 while (str1[str1_c] != '\0') {
    str2_c = 0;
    while (str2[str2_c] != '\0') {
        if (str1[str1_c] == str2[str2_c]) {
            str3[str3_c] = str1[str1_c];
            ++str3_c;
        }
        ++str2_c;
    }
    ++str1_c;
 }
 str3[str3_c] = '\0';
}
