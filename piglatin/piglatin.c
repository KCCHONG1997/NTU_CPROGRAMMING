#include <stdio.h>
#include <string.h>
#define MAX_SIZE 80
void PigLatin(char *eword, char *PLword);
int main()
{
   char eword[MAX_SIZE];
   char PLword[MAX_SIZE];

   printf("Enter your English word: \n");
   scanf("%s", eword);
   PigLatin(eword, PLword);
   printf("PigLatin(): %s\n", PLword);
   return 0;
}
void PigLatin(char *eword, char *PLword)
{
	/*edit*/
/* Write your code here */
int idx = 0;
char temp[30];
    if(*eword == 'a' || *eword == 'e' || *eword == 'i' || *eword == 'o' || *eword == 'u' || *eword == 'y'){
        strcpy(PLword, strcat(eword, "ay\0"));
    } else {
        //find the vowel
        for (int i = 0; *(eword+i) != '\0'; i++){
            if(*(eword+i) == 'a' || *(eword+i) == 'e' || *(eword+i) == 'i' || *(eword+i) == 'o' || *(eword+i) == 'u'){
                idx = i;
                break;
            }
        }

        strcpy(PLword, eword + idx);
        strncpy(temp, eword, idx);
        strcat(PLword, temp);
        strcat(PLword,"ay");
    }


	/*end_edit*/
}