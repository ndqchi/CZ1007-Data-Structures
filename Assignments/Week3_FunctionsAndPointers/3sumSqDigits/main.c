#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
 int num, result;
 printf("Enter a number: \n");
 scanf("%d", &num);
 printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
 sumSqDigits2(num, &result);
 printf("sumSqDigits2(): %d\n", result);
 return 0;
}
int sumSqDigits1(int num)
{
 /* Write your code here */
 int i =0;
 while (num>0) {
    i += (num%10)*(num%10);
    num /= 10;
 }
 return i;
}
void sumSqDigits2(int num, int *result)
{
 /* Write your code here */
 *result =0;
 while (num > 0) {
    *result += (num%10)*(num%10);
    num /= 10;
 }
}
