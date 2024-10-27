#include <stdio.h>

int main()
{
    char word[1000];
    int length = 0;

    printf("Enter a word: ");
    fgets(word, 1000, stdin);

    while (word[length] != '\0')
    {
        length++;
    }
    

    if (word[length - 1] == '\n')
    {
        length--;
    }

    printf("Length of the input string: %d\n", length);

    return 0;
}