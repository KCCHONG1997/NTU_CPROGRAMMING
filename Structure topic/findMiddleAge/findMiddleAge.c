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

    printf("Enter person 1:\n");
    scanf("%s %d", p[0].name, &p[0].age);
    
    printf("Enter person 2:\n");
    scanf("%s %d", p[1].name, &p[1].age);
    
    printf("Enter person 3:\n");
    scanf("%s %d", p[2].name, &p[2].age);
    
	/*end_edit*/
}
Person findMiddleAge(Person *p) 
{
	/*edit*/
	/* Write your code here */
	Person middle;
	int ages[3] = {p[0].age,p[1].age,p[2].age};
	
	for (int i = 0; i < 3 ; i++){
	    for (int j = 0; j < 3; j++){
	        if (ages[i] > ages[j]){
	            int temp = ages[i];
	            ages[i] = ages[j];
	            ages[j] = temp;
	        }
	    }
	}
    
    middle = p [ages[1] == p[0].age ? 0 : (ages[1] == p[1].age ? 1 : 2)];
    
    return middle;

	/*end_edit*/
}