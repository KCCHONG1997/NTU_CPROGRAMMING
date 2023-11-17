#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main() 
{
   char str[80], substr[80], *p; 
   int result=INIT_VALUE;
   
   printf("Enter the string: \n"); 
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n"); 
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0'; 
   result = countSubstring(str, substr);
   printf("countSubstring(): %d\n", result);     
   return 0;
}
int countSubstring(char str[], char substr[])
{
	/*edit*/
	/* Write your code here */
	int count = 0;
	
	for(int i = 0; str[i] != '\0'; i++){
	    for (int j = 0; substr[j] !='\0'; j++){
	        if (str[i+j] != substr[j]){
	            break;
	        }
	        if (str[i+j] == substr[j]){
	            if(substr[j+1] == '\0'){
	                count++;
	            }
	        }
	    }
	}
	return count;

	/*end_edit*/
}