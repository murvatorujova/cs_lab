#include <stdio.h>

int main() {
    int number, sumEven = 0, sumOdd = 0; 
    int limit;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &limit); 

    printf("Enter a sequence of numbers (enter 0 to stop):\n");

    for (int i = 0; i < limit; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            sumEven += number;
        } else {
            sumOdd += number;
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
