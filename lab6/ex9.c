#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main()
{
    srand(time(NULL));
    int n;

    while (1)
    {
        printf("Enter the size of the board (n >= 3): ");
        scanf("%d", &n);
        if (n < 3)
        {
            printf("Size must be at least 3. Please try again.\n");
            continue;
        }

        char board[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[i][j] = '_';
            }
        }

        // Randomly place the treasure
        int treasureRow = rand() % n;
        int treasureCol = rand() % n;
        board[treasureRow][treasureCol] = 't';

        int maxAttempts = n * 2;
        int attemptsLeft = maxAttempts;
        int found = 0;

        printf("Welcome to the Treasure Hunter Game!\n");
        printf("You have a maximum of %d attempts to find the treasure!\n", maxAttempts);

        while (attemptsLeft > 0)
        {
            int guessRow, guessCol;
            printf("Enter your guess coordinates (row and column, separated by space): ");
            scanf("%d %d", &guessRow, &guessCol);

            if (guessRow < 0 || guessRow >= n || guessCol < 0 || guessCol >= n)
            {
                printf("Invalid coordinates! Please enter values between 0 and %d.\n", n - 1);
                continue;
            }

            if (guessRow == treasureRow && guessCol == treasureCol)
            {
                found = 1;
                break; // Treasure found
            }
            else
            {
                attemptsLeft--;
                printf("Wrong guess! Attempts left: %d\n", attemptsLeft);
                if (guessRow < treasureRow)
                {
                    printf("Hint: Try South!\n");
                }
                else if (guessRow > treasureRow)
                {
                    printf("Hint: Try North!\n");
                }
                if (guessCol < treasureCol)
                {
                    printf("Hint: Try East!\n");
                }
                else if (guessCol > treasureCol)
                {
                    printf("Hint: Try West!\n");
                }
                if (guessRow < treasureRow && guessCol < treasureCol)
                {
                    printf("Hint: Try SouthEast!\n");
                }
                else if (guessRow < treasureRow && guessCol > treasureCol)
                {
                    printf("Hint: Try SouthWest!\n");
                }
                else if (guessRow > treasureRow && guessCol < treasureCol)
                {
                    printf("Hint: Try NorthEast!\n");
                }
                else if (guessRow > treasureRow && guessCol > treasureCol)
                {
                    printf("Hint: Try NorthWest!\n");
                }
            }
        }
        if (found)
        {
            printf("Congratulations! You win in %d attempts!\n", maxAttempts - attemptsLeft + 1);
        }
        else
        {
            printf("Sorry, you ran out of attempts! The treasure was at (%d, %d).\n", treasureRow, treasureCol);
        }

        char choice;
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
        {
            printf("Thank you for playing! I hope you have a great rest of your day:)\n");
            break; // Exit the game loop
        }
    }

    return 0;
}
