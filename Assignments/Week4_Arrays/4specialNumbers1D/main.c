void specialNumbers1D(int ar[], int num, int *size);
int main()
{
   int a[20],i,size=0,num;

   printf("Enter a number (between 100 and 999): \n");
   scanf("%d", &num);
   specialNumbers1D(a, num, &size);
   printf("specialNumbers1D(): ");
   for (i=0; i<size; i++)
      printf("%d ",a[i]);
   return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
	/*edit*/
   /* Write your code here */
   int start;

   for (start=100;start<=num;start++) {
       int a = start%10;
       int b = (start/10)%10;
       int c = (start/100)%10;
       if (start == a*a*a + b*b*b + c*c*c) {
           ar[*size] = start;
           ++(*size);
       }
   }


	/*end_edit*/
}
