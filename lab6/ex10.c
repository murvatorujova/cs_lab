#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

int main()
{

    srand(time(NULL));
    int n;

    while (1) // continue untill user says no == n
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

        int numShips = n / 2;
        int shipLength = n / 2;
        int shipsPlaced = 0;

        while (shipsPlaced < numShips)
        {
            int orientation = rand() % 2; // 0 for horizontal, 1 for vertical
            int row, col;

            if (orientation == 0)
            {
                row = rand() % n;
                col = rand() % (n - shipLength + 1); // Ensure the ship fits

                int canPlace = 1;
                for (int j = 0; j < shipLength; j++)
                {
                    if (board[row][col + j] == 's')
                    {
                        canPlace = 0; // Can't place ship here
                        break;
                    }
                }
                if (canPlace)
                {
                    for (int j = 0; j < shipLength; j++)
                    {
                        board[row][col + j] = 's';
                    }
                    shipsPlaced++;
                }
            }
            else
            {
                row = rand() % (n - shipLength + 1);
                col = rand() % n;
                // Check if the ship can be placed
                int canPlace = 1;
                for (int j = 0; j < shipLength; j++)
                {
                    if (board[row + j][col] == 's')
                    {
                        canPlace = 0; // Can't place ship here
                        break;
                    }
                }
                if (canPlace)
                {
                    for (int j = 0; j < shipLength; j++)
                    {
                        board[row + j][col] = 's'; // Place the ship
                    }
                    shipsPlaced++;
                }
            }
        }

        int hits = 0;
        int totalShips = numShips * shipLength;

        printf("Welcome to the Battleship Game!\n");
        printf("You need to hit all the ships!\n");

        while (hits < totalShips)
        {
            // User guesses coordinates
            int guessRow, guessCol;
            printf("Enter your guess coordinates (row and column, separated by space): ");
            scanf("%d %d", &guessRow, &guessCol);

            // Check if the guess is valid
            if (guessRow < 0 || guessRow >= n || guessCol < 0 || guessCol >= n)
            {
                printf("Invalid coordinates! Please enter values between 0 and %d.\n", n - 1);
                continue;
            }

            // Check if the guess is a hit or miss
            if (board[guessRow][guessCol] == 's')
            {
                board[guessRow][guessCol] = 'x'; // Mark the hit
                hits++;
                printf("You hit a ship! Total hits: %d\n", hits);
            }
            else if (board[guessRow][guessCol] == '_')
            {
                board[guessRow][guessCol] = 'o'; // Mark the miss
                printf("You missed!\n");
            }
            else
            {
                printf("You already guessed that location!\n");
            }

        }

        printf("Congratulations! You've hit all the ships!\n");

        // Ask if the user wants to play again
        char choice;
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice); // Space before %c to ignore any newline characters
        if (choice != 'y' && choice != 'Y')
        {
            printf("Thank you for playing!\n");
            break; // Exit the game loop
        }
    }
    return 0;
}