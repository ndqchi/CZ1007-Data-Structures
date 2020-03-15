#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
 int power;
 float number, result=-1;

 printf("Enter the number and power: \n");
 scanf("%f %d", &number, &power);
 printf("power1(): %.2f\n", power1(number, power));
 power2(number,power,&result);
 printf("power2(): %.2f\n", result);
 return 0;
}
float power1(float num, int p)
{
 /* Write your code here */
 float res=1.0;
 if (p==0) return 1;
 while (p>0) {
    res *= num;
    p--;
 }
 while (p<0) {
    res /= num;
    p++;
 }
 return res;
}
void power2(float num, int p, float *result)
{
 /* Write your code here */
 *result = 1;
 if (p==0) return;
 while (p>0) {
    *result *= num;
    p--;
 }
 while (p<0) {
    *result /= num;
    p++;
 }
}
