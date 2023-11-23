#include <stdio.h>
void callbyvalue(int a, int b);     /*function prototype*/
void callbyreference(int *pa, int *pb); /*function prototype*/

void main()
{
   int a = 1;
   int b = 3;

   printf("\nBefore calling callbyvalue: a = %d b = %d", a, b); // 1 and 3 // 0 and 0 // 1 and 3
   callbyvalue(a, b);

   printf("\nAfter calling callbyvalue: a = %d b = %d", a, b);

   printf("\nBefore calling callbyreference: a = %d b = %d", a, b); // 1 and 3
   callbyreference(&a, &b);                                     // adress of a 200 adress of b 300

   printf("\nAfter calling callbyreference: a = %d b = %d", a, b);
}

void callbyvalue(int a, int b)
{
   a = 0;
   b = 0;
   printf("\nwithin callbyvalue: a = %d b = %d", a, b);
   return; 
}

void callbyreference(int *a, int *b) // pa =200 pb = 300 *pa = &a *pa =-
{
   *a = 0;
   *b = 0;
   printf("\nwithin callbyreference: *a = %d *b = %d", *a, *b);
   return;
}