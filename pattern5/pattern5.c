#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
    int height = 0;
    int middle = -1;
    int pattern = 0;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("The pattern is: \n");
    
    middle = height-1;
    
    for (int i = 0; i < height; i++){
        
        for (int k = 0; k < height - (i+1); k++){
            printf(" ");
        }
        for (int j = 0; j < (2*i+1); j++){
            (pattern%2) ? printf("=") : printf("+");
            pattern++;
        }
        printf("\n");
    }
	/*end_edit*/
   return 0;  
}