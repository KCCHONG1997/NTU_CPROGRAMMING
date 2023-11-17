#include <stdio.h>
void sortCharStr(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   sortCharStr(str);
   printf("sortCharStr(): %s\n", str);
   return 0;
}
void sortCharStr(char *str)
{
	/*edit*/
/* Write your code here */
char temp;
int sorted = 0;
int diff = 0;
int index = 0;

for (int i = 0; str[i] != '\0'; i++){
    for (int j = 0; str[j] !='\0'; j++){
        if (str[i] < str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
} 

	/*end_edit*/
}