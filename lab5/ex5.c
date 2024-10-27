#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char word[1000];
    int palindrome = 1;
    int length;

    printf("Enter the word: ");
    fgets(word, 1000, stdin);

    length = strlen(word);
    if (word[length - 1] == '\n')
    {
        word[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            palindrome = 0; // false
            break;
        }
    }

    if (palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}