#include <stdio.h>
void decTohexStr(char *str, int num);
int main()
{
   int num,i;
   char str[20];
   printf("Enter a decimal number: \n");
   scanf("%d",&num);
   decTohexStr(str,num);
   printf("decTohexStr(): ");
   printf("%s\n",str);
   return 0;
}
void decTohexStr(char *str, int num)
{
	/*edit*/
   /* Write your code here */
  int numArr[20];
    int arrIdx = 0;
    int temp = num;
    int q = 0;
    int r = 0;
    
    while (temp / 16 != 0 ){
        q = temp/16;
        r = temp%16;
        
        numArr[arrIdx] = r;
        arrIdx++;
        
        temp = q;
    }
    if (temp / 16 == 0){
        numArr[arrIdx] = temp%16;
    }
    

    for (int i = arrIdx; i >= 0; i--) {
        if (numArr[i] < 10) {
            *str = numArr[i] + '0';  // Convert digit to character
        } else {
            *str = numArr[i] - 10 + 'A';  // Convert digit to character ('A' for 10, 'B' for 11, ..., 'F' for 15)
            // numArr[i] - 10 + 'A' converts the digit to its ASCII character representation. 
            // The subtraction of 10 is done because for values 10 and above, we want to map them to the ASCII characters 'A' to 'F'.
        }
        str++;
    }

    *str = '\0';  // Null-terminate the string

    }
    

	/*end_edit*/