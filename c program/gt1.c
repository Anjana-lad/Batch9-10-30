#include <stdio.h>
int main() {
   int i;
   float number, average, sum =0;
   for (i=1; i<=50;i++) {
      printf("%d. Enter a number: ", i);
      scanf("%f", &number);
   if (number<0) {
         goto jump;
      }
      sum+=number;
   }
jump:
   average = sum / (i - 1);
   printf("Sum = %f\n", sum);
   printf("Average = %f", average);

   return 0;
}