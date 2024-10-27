#include <stdio.h>
#include <string.h>

void reverseTokens(char *input)
{
    char *tokens[100];
    int tokenCount = 0;

    char *token = strtok(input, " ");
    while (token != NULL)
    {
        tokens[tokenCount++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = tokenCount - 1; i >= 0; i--)
    {
        printf("%s", tokens[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    reverseTokens(input);

    return 0;
}