#include <stdio.h>

int main()
{
  int n, last, sum = 0;
  printf("Enter the number ");
  scanf("%d", &n);

  int i = 10;
  while (n > 0)
  {
    last = n % 10;

    if (last % 2 == 0)
    {
      sum = sum + last;
    }
    n = n / 10;
  }

  printf("The sum of its even intigers is %d", sum);
}