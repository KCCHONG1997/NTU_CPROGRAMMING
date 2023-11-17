#include <stdio.h>
void printChart(int x, int y, int z);
int main() 
{
   int x,y,z;

   printf("Enter 3 inputs: \n");
   scanf("%d %d %d", &x, &y, &z);
   printf("The bar chart is: \n");
   printChart(x,y,z);
   return 0;
}
void printChart(int x, int y, int z)
{
	/*edit*/
   /* Write your code here */
//   int largest = -1;
   int largest = (x>y)? ((x>z)? x : y) : ((y>z)?y:z);
   for (int i = largest; i>0; i--){
       
       if (x == i){
           printf("*");
           x--;
       } else {
           printf("  ");
       }
       
       
        if (y == i){
           printf("*");
           y--;
       } else {
           printf("  ");
       }
       
        if (z == i){
           printf("*");
           z--;
       }else {
           printf("  ");
       }
       
       printf("\n");
   }
   


	/*end_edit*/
}