#include <stdio.h>
int main(void) {
double number1, number2, mean;  
  printf("Enter your 1st semester grade: ");
      scanf("%lf",&number1);
  printf("Enter your 2nd semester grade: ");
      scanf("%lf",&number2);
    mean = (number1 + number2)/2;
   printf("Your final mean is: %.2f", mean); 
  return 0;
}
