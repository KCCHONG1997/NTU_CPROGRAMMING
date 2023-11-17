#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main() 
{
   char a[40],b[40];
   char c[40],*p;

   printf("Enter the first string: \n");
   fgets(a, 40, stdin);  
   if (p=strchr(a,'\n')) *p = '\0';
   printf("Enter the second string: \n");
   fgets(b, 40, stdin);  
   if (p=strchr(b,'\n')) *p = '\0';
   mergeStr(a,b,c);
   printf("mergeStr(): ");
   puts(c);   
   return 0;
}
void mergeStr(char *a, char *b, char *c)  
{   
	/*edit*/
/* Write your code here */
    int i = 0, j = 0, k = 0;

    while (a[i] != '\0' && b[j] != '\0') {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (a[i] != '\0') {
        c[k++] = a[i++];
    }

    while (b[j] != '\0') {
        c[k++] = b[j++];
    }

    c[k] = '\0';

	/*end_edit*/
}