#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num)
{
	/*edit*/
   /* Write your code here */
    int i=1, newValue=0;

   while(num != 0)
   {
       if(num % 2 == 0)
       {
           newValue += (num % 10) * i;
           i *= 10;
       }

       num /= 10;
   }
   return (newValue != 0) ? newValue : -1;

	/*end_edit*/
}
void extEvenDigits2(int num, int *result)
{
	/*edit*/
   /* Write your code here */
    int i=1;
    *result=0;
    while (num !=0) {
        if (num%2==0) {
            *result += (num%10)*i;
            i *= 10;
        }
        num /= 10;
    }
    if(*result == 0)
    *result = -1;

	/*end_edit*/
}
