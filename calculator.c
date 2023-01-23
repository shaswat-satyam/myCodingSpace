#include <stdio.h>

int main() {

  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%d %d", &first, &second);

  switch (op) {
    case '+':
      printf("%d + %d = %d \n", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d \n", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d \n", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d \n", first, second, first / second);
      break;
    default:
      printf("Invalid Choice");
  }
  return 0;
}
