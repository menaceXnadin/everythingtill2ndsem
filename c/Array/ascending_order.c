#include <stdio.h>
void main()
{
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i)
   { // 43 56 78 98 45
      for (j = i + 1; j < n; ++j)
      { // 45> 56  j= 2  43> 78 j=3 43>98 j= 4 43>45 num 0 =45
         // num 3 =  98 > 45  yes  a = 98 num 3 = 45 num 4 =
         if (num[i] > num[j])
         {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i)
   {
      printf("%d\n", num[i]);
   }
}
