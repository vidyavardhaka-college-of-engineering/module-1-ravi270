//INPUT: 12
//OUTPUT: Square root of 12.00 = 3.46
#include <stdio.h>
#include<math.h>
int main()
{
   float num, root;
   printf("enter the number: ");   // Correct the code
   scanf("%f", &num);
   // Computes the square root of num and stores in root.
   root = sqrt(num);
   printf("Square root of %.2f = %.2f",num ,root);  // Correct the code
   return 0;
}
