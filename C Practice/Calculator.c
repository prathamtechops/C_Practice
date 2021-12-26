#include <stdio.h>
int main() {
  char operator;
  float a , b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter the first digit:\n ");
  scanf("%f", &a);
  printf("Enter the second digit:\n ");
  scanf("%f", &b);
  

  switch (operator) {
    case '+':
      printf("%.2f + %.2f = %.2f", a, b, a + b);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f", a, b, a - b);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f", a, b, a * b);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f", a, b, a / b);
      break;
    // Invalid Value
    default:
      printf("Error!");
  }

  return 0;
}
