#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[40];
   char telno[40];
   int id;
   double salary;
} Employee;
void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);
int main()
{
   Employee emp[MAX];
   char name[40], *p;
   int size, choice, result;

   printf("Select one of the following options: \n");
   printf("1: readin() \n");
   printf("2: search() \n");
   printf("3: addEmployee() \n");
   printf("4: print() \n");
   printf("5: exit() \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            size = readin(emp);
            break;
         case 2:
            printf("Enter search name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p=strchr(name,'\n')) *p = '\0';
            result = search(emp,size,name);
            if (result != 1)
               printf ("Name not found! \n");
            break;
         case 3:
            printf("Enter new name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p=strchr(name,'\n')) *p = '\0';
            result = search(emp,size,name);
            if (result != 1)
               size = addEmployee(emp, size, name);
            else
               printf("The new name has already existed in the database\n");
            break;
         case 4:
            printEmp(emp, size);
            break;
         default:
            break;
      }
   } while (choice < 5);
   return 0;
}
void printEmp(Employee *emp, int size)
{
   int i;

   printf("The current employee list: \n");
   if (size==0)
      printf("Empty array\n");
   else
   {
      for (i=0; i<size; i++)
         printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id,
 	emp[i].salary);
   }
}
int readin(Employee *emp)
{
	/*edit*/
   /* Write your code here */
    char *p;
    char name[40];
    char telno[40];
    int id;
    double salary;

    int size = 0;

   /* write your code here */
    while (1){
        printf("Enter name:\n");
        scanf("\n");
        fgets(name, 40, stdin);
        if (p=strchr(name,'\n')) *p = '\0';

        if (strcmp(name, "#") == 0) {
            break;
        }

        printf("Enter tel:\n");
        scanf("\n");
        fgets(telno, 80, stdin);
        if (p=strchr(telno,'\n')) *p = '\0';

        printf("Enter id:\n");
        scanf("%d", &id);

        printf("Enter salary:\n");
        scanf("%lf", &salary);

        emp[size].id = id;
        strcpy(emp[size].name,name);
        emp[size].salary = salary;
        strcpy(emp[size].telno, telno);
        size++;
   }
   return size;

	/*end_edit*/
}
int search(Employee *emp, int size, char *target)
{
	/*edit*/
   /* Write your code here */

   int i;
    for (i = 0; i < size; i++) {
        if (strcmp(emp[i].name, target) == 0) {
            printf("Employee found at index location: %d\n", i);
            printf("%s %s %d %.2f\n", emp[i].name, emp[i].telno, emp[i].id, emp[i].salary);
            return 1; // Employee found
        }
    }
    return 0; // Employee not found


	/*end_edit*/
}
int addEmployee(Employee *emp, int size, char *target)
{
	/*edit*/
   /* Write your code here */
    if (size >= MAX) {
        printf("Database is full. Unable to add a new employee.\n");
        return size; // Return current size without modification
    }

    char *p;
    char telno[40];
    int id;
    double salary;

    printf("Enter new tel:\n");
    scanf("\n");
    fgets(telno, 80, stdin);
    if (p = strchr(telno, '\n'))
        *p = '\0';

    printf("Enter id:\n");
    scanf("%d", &id);

    printf("Enter salary:\n");
    scanf("%lf", &salary);

    // Add the new employee to the end of the array
    emp[size].id = id;
    strcpy(emp[size].name, target); // Use the target name passed to the function
    emp[size].salary = salary;
    strcpy(emp[size].telno, telno);

    printf("Added at position: %d\n", size);

    return size + 1; // Return the updated size of the array

	/*end_edit*/
}
