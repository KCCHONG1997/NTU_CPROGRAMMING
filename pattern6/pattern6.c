#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
   
   int height=0;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("The pattern is: \n");
    for(int i = 0 ; i < height; i++){
        for (int j = 0; j < height - i - 1; j++){
            printf("*");
        }
        
        for(int k = 0 ; k <= i; k++){ 
            printf("=");
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;  
}