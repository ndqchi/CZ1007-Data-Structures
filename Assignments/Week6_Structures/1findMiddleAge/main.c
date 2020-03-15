#include <stdio.h>
typedef struct {
   char name[20];
   int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
   Person man[3], middle;

   readData(man);
   middle = findMiddleAge(man);
   printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
   return 0;
}
void readData(Person *p)
{
	/*edit*/
	/* Write your code here */
    /*printf("Enter person 1: \n");
    scanf("%s %d", p->name, &p->age);
    p++;
    printf("Enter person 2: \n");
    scanf("%s %d", p->name, &p->age);
    p++;
    printf("Enter person 3: \n");
    scanf("%s %d", p->name, &p->age); */
    int i=0;
    while (i<3) {
        printf("Enter person %d: \n", i+1);
        scanf("%s %d", p->name, &p->age);
        p++;
        i++;
    }


	/*end_edit*/
}
Person findMiddleAge(Person *p)
{
	/*edit*/
	/* Write your code here */
    if ((p->age) > (p+1)-> age && (p->age) < (p+2)->age) return *p;
    else if ((p->age) < (p+1)-> age && (p->age) > (p+2)->age) return *p;
    else if ((p+1)->age > (p-> age) && (p+1)->age < (p+2)->age) return *(p+1);
    else if ((p+1)->age < (p-> age) && (p+1)->age > (p+2)->age) return *(p+1);
    return *(p+2);
	/*end_edit*/
}
