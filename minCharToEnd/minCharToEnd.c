#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
   char str[80];

   printf("Enter a string: \n");
   scanf("%s",str);
   minCharToEnd(str);
   printf("minCharToEnd(): %s",str);
   return 0;
}
void minCharToEnd(char *str)
{
	/*edit*/
/* Write your code here */
char minChar = *str;
int index = -1;

for (int i = 0; *(str + i) != '\0'; i++){
        if (minChar > *(str + i)){
            minChar = *(str + i);
            index = i;
        }
}
for (int j = index; *(str + j) != '\0'; j++){
    if (*(str + j + 1) == '\0'){
        *(str + j) = minChar;
    } else {
        *(str + j) = *(str + j + 1);
    }

}




	/*end_edit*/
}
