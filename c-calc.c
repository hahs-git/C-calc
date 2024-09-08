#include <stdio.h>
int main() {
 int num1, num2, result;
 printf("Enter first number: ");
 scanf("%d", &num1);
 printf("Enter second number: ");
 scanf("%d", &num2);
 if (num1 >= 0 && num2 >= 0) {
 result = num1 + num2;
 printf("The sum of %d and %d is %d.\n", num1, num2, result);
 } else {
 printf("Error: Invalid input.");
 }
 return 0;
}
