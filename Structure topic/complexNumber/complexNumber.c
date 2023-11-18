#include <stdio.h>
#include <math.h>
typedef struct {
   double real;
   double imag;
} Complex;
Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex div(Complex *c1, Complex *c2);
int main()
{
   int choice;
   Complex input1, input2, result;
   
   printf("Complex number operations: \n");
   printf("1 - addition \n");    
   printf("2 - subtraction \n");
   printf("3 - multiplication \n");
   printf("4 - division \n");
   printf("5 - quit \n");
   do {         
      printf("Enter your choice: \n");   
      scanf("%d", &choice);
      if (choice == 5) 
         return 0;           
      printf("Enter Complex Number 1: \n");
      scanf("%lf %lf", &input1.real, &input1.imag);
      printf("Enter Complex Number 2: \n");
      scanf("%lf %lf", &input2.real, &input2.imag); 
      switch (choice) {    
         case 1: result = add(input1, input2);
            break;
         case 2: result = sub(&input1, &input2);
            break;
         case 3: result = mul(input1, input2);
            break;
         case 4: result = div(&input1, &input2);
            break;
      }
      printf("complex(): real %.2f imag %.2f\n", 
             result.real, result.imag); 
   } while (choice<5);
   return 0;
}
Complex add(Complex c1, Complex c2)
{
	/*edit*/
    /* Write your code here */
    Complex result = {
        c1.real + c2.real, c1.imag + c2.imag
    };
    return result;


	/*end_edit*/
}
Complex sub(Complex *c1, Complex *c2)
{
	/*edit*/
    /* Write your code here */
    Complex result = {
        c1->real - c2->real, c1->imag - c2->imag
    };
    return result;

	/*end_edit*/
}
Complex mul(Complex c1, Complex c2)
{
	/*edit*/
    /* Write your code here */
    Complex result = {
        ((c1.real * c2.real) - (c1.imag * c2.imag)), ((c1.real * c2.imag) + (c2.real * c1.imag))
    };
    return result;

	/*end_edit*/
}
Complex div(Complex *c1, Complex *c2)
{
	/*edit*/
    /* Write your code here */
    Complex numerator1 = *c1;
    Complex numerator2 = {
        c2->real, -1* c2->imag
    };
    
    Complex topPart = mul(numerator1, numerator2);
    
    Complex bottomPart = mul(*c2, numerator2);
    
    
    Complex result = {
        topPart.real / bottomPart.real, topPart.imag / bottomPart.real
    };
    return result;

	/*end_edit*/
 }