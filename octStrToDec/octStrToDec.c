#include <stdio.h>
int octStrTodec(char *str);
int main()
{
   char str[20],*sp;
   int num;
   
   printf("Enter an octal number: \n");
   scanf("%s",str);
   num=octStrTodec(str);
   printf("octStrTodec(): %d\n",num);
   return 0;
}
int octStrTodec(char *str) 
{
	/*edit*/
   /* Write your code here */
   int length = 0;
   int dec = 0; 
   
   while (str[length] != '\0'){
       length++;
   }
   
   for (int i = 0; i < length; i++){
       dec = dec + ( (str[i] - '0') * pow(8,length - 1 - i) );
   }
   return dec;


	/*end_edit*/
}