#include <stdio.h>
#include <string.h>
char *insertStr(char *a, char *s);
int main()
{
   char a[40],s[40],*p;

   printf("Enter the string a: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the string s: \n");
   fgets(s, 40, stdin);  
   if (p=strchr(s,'\n')) *p = '\0';
   insertStr(a,s);
   printf("insertStr(): ");
   puts(a);   
   return 0;
}
char *insertStr(char *a, char *s)
{
	/*edit*/
/* Write your code here */
    char concat[80];
    char tempChar;
    strcat(a,s);
    strcpy(concat,a);
    
    for (int i = 0; concat[i] != '\0'; i++){
        for (int j = 0; concat[j] != '\0'; j++){
            if (concat[i] < concat[j]){
                tempChar = concat[i];
                concat[i] = concat[j];
                concat[j] = tempChar;
            }
        }
    }
    strcpy(a, concat);

	/*end_edit*/
}