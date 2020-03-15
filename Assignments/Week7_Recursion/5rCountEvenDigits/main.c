#include <stdio.h>
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
int main()
{
 int number, result;

 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
 rCountEvenDigits2(number, &result);
 printf("rCountEvenDigits2(): %d\n", result);
 return 0;
}
int rCountEvenDigits1(int num)
{
 /* Write your program code here */
 if (num==0) return 0;
 if (num%2==0) return rCountEvenDigits1(num/10) +1;
 return rCountEvenDigits1(num/10);
}
void rCountEvenDigits2(int num, int *result)
{
 /* Write your program code here */
 *result =0;
 if (num==0) return;
 if (num % 2 ==0) {
    rCountEvenDigits2(num/10,result);
    *result += 1;
 } else {
    rCountEvenDigits2(num/10,result);
 }
}
