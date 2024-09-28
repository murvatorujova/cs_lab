#include <stdio.h>

int main()
{
  int n, digit, intiger = 0, i = 1;
  printf("Enter the number ");
  scanf("%d", &n);

  while (n > 0)
  {
    digit = n % 10;
    n = n / 10;

    if (digit != 0)
    {
      intiger += digit * i;
      i = i * 10;
    }
  }

  printf("The intiger without zeeros would look like %d", intiger);
}