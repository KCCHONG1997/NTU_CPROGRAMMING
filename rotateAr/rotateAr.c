#include <stdio.h>
#define N 20
int main()
{
   int a[N],i,j,k,m;
   int size;
	/*edit*/
   /* Write your code here – for additional local variables */
    int temp = -1;

	/*end_edit*/

   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)
      scanf("%d", &a[i]);
   printf("Result: \n");

	/*edit*/
   /* Write your code here */
    for (int i = 0; i < size; i++){
        temp = a[size-1];
        for (int j = size; j > 0; j--){
            a[j] = a[j-1];
        }
        a[0] = temp;
        for (int k = 0; k < size; k++){
            printf("%d",a[k]);
        }
        printf("\n");
    }

	/*end_edit*/
   return 0;
}
