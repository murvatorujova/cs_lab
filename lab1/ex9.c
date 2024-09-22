#include <stdio.h> 
#include <stdlib.h>

int main(){
    int a, num1, num2, num3, max;
    printf("Enter a three digit number: ");
    scanf("%d", &a);

    a = abs(a);

    num1 = a / 100;
    num2 = a / 10 % 10;
    num3 = a % 10;

  

        max = num1 * num2 * num3;

        if (num1 * num2 > max)
        {
            max = num1 * num2; 
        }
        if (num2 * num3 > max)
        {
            max = num2 * num3;
        }
        if (num1 * num3 > max){
            max = num1 *num3;
        }

        printf("The maximum number that can be produced by multiplying some or all the digits is %d", max);

        return 0;

    }

