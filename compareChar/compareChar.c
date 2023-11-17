#include <stdio.h>
#include <string.h>
void compareChar(char *str1, char *str2, char *str3);
int main()
{
   char str1[80],str2[80],str3[80];
   
   printf("Enter the first string: \n");
   scanf("%s",str1);
   printf("Enter the second string: \n");
   scanf("%s",str2);
   compareChar(str1, str2, str3);
   printf("compareChar(): %s\n", str3);
   return 0;
}
void compareChar(char *str1, char *str2, char *str3)
{
	/*edit*/
   /* Write your code here */
   int i = 0;
   while (str1[i] != '\0' && str2[i] != '\0'){
       str3[i] = (str1[i] > str2[i])? str1[i] : str2[i];
       i++;
   }
   
   
   while (str1[i] != '\0'){
       str3[i] = str1[i];
       i++;
   }

   while (str2[i] != '\0'){
       str3[i] = str2[i];
       i++;
   }
   str3[i] = '\0';
	/*end_edit*/
}