#include <stdio.h>

int main() {
    char op;
    printf("Enter the character :");
    scanf("%c",&op);

  switch (op) {
    case 'a':
      printf("vowel");
      break;
    default:
      printf("Invalid Choice");
  }
  return 0;
}
