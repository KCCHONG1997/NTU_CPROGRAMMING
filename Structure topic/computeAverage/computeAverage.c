	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
   printf("average(): %.2f\n", average());           
   return 0;
}
double average()
{
	/*edit*/
   /* Write your program code here */
   char *p;
   struct student s;
   
   double total = 0;
   int size = 0;
   double aver = 0;
   
  while(1){
    
    printf("Enter student name: \n");
    scanf("\n");
    fgets(s.name, 20, stdin);
    if(p=strchr(s.name,'\n')) *p = '\0';
    
    // puts(s.name);
    if (strcmp(s.name,"END") == 0){
        if(size != 0){
            aver = total/size;
        }
        return aver;
        break;
    }
    
    printf("Enter test score: \n");
    scanf("%lf", &s.testScore);
    
    printf("Enter exam score: \n");  
    scanf("%lf", &s.examScore);
    
    // printf("%.2f",s.testScore);
    
    s.total = (s.testScore + s.examScore)/2;
    printf("Student %s total = %.2f\n",s.name , s.total);
    
    total += s.total;
    size += 1;
    
  }


	/*end_edit*/
}