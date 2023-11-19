#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
   double total = 1;
   double x = 0;
   printf("Enter a number: \n");
   scanf("%lf",&x);
   
    for (int i = 0; i < 20; i++){
        double numerator = pow(x,i+1);
        double denumerator = factorial(i+1);
        double sign = (i%2)? 1 : -1;
        
        // printf("THIS IS NUMERATOR: %lf\n", sign);
        total = total + (numerator / denumerator)*sign;
    }
    
    printf("Result = %.2f", total);

	/*end_edit*/
   return 0;  
}

int factorial (int num){
    int factNum = 1;
    
    for (int i = num; i>0; i--){
        factNum = factNum*i;
    }
    
    return factNum;
}