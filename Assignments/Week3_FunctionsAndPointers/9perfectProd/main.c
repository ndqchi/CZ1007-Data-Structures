#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
   int number, result=0;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("Calling perfectProd1() \n");
   printf("perfectProd1(): %d\n", perfectProd1(number));

   printf("Calling perfectProd2() \n");
   perfectProd2(number, &result);
   printf("perfectProd2(): %d\n", result);
   return 0;
}
int perfectProd1(int num)
{
	/*edit*/
   /* Write your code here */
    int ans =1;
    for (int i=2;i<num;i++) {
        int sum = 1;
        for (int j=2; j*j<=i; j++)
        {
            if (i%j==0)
            {
                if(j*j!=i)
                    sum = sum + j + i/j;
                else
                    sum=sum+j;
            }
        }
        if (sum == i && i != 1) {
            printf("Perfect number: %d\n",i);
            ans *= i;
        }
    } if (ans==1) return 0;
    return ans;

	/*end_edit*/
}
void perfectProd2(int num, int *prod)
{
	/*edit*/
   /* Write your code here */
    *prod =1;
    for (int i=2;i<num;i++) {
        int sum = 1;
        for (int j=2; j*j<=i; j++)
        {
            if (i%j==0)
            {
                if(j*j!=i)
                    sum = sum + j + i/j;
                else
                    sum=sum+j;
            }
        }
        if (sum == i && i != 1) {
            printf("Perfect number: %d\n",i);
            *prod *= i;
        }
    } if (*prod == 1) *prod = 0;

	/*end_edit*/
}
