#include <stdio.h>
#define TRUE 1
#define FALSE 0
int romanNum(char *str);
int main()
{ 
   int num;
   char roman[10];
   printf("Enter a Roman number: \n");
   scanf("%s",roman);
   num = romanNum(roman);
   printf("romanNum(): %d\n", num);
   return 0;
}
int romanNum(char *str)
{        
	/*edit*/
   /* Write your code here */
    int num = 0;
    int romNum;
    
    for (int i = 0; i < 10; i++){
        if (*(str+i) == '\n'){
            break;
        }
        // printf("  %c\n", *(str+i)  );
        // printf(  "%d\n", *(str+i) > *(str+1+i) );
        
        if ( *(str+i) >= *(str+1+i) ){
            if (*(str+i) == 'I')
                num = num + 1;
            else if (*(str+i) == 'V')
                num = num + 5;
            else if (*(str+i) == 'X')
                num = num + 10;  
        }else {
            if (*(str+i) == 'I')
                num = num - 1;
            else if (*(str+i) == 'V')
                num = num - 5;
            else if (*(str+i) == 'X')
                num = num - 10;  
        }
    }
    return num;
	/*end_edit*/
}