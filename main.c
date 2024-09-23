#include <stdio.h>
int main(void) {
double number1, number2, mean;  
  printf("Type your 1st semester grade: ");
      scanf("%lf",&number1);
  printf("Type your 2nd semester grade: ");
      scanf("%lf",&number2);
    mean = (number1 + number2)/2;
   printf("Your final mean is: %.2f", mean); 
  return 0;
}
