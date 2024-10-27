#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000], reversed[1000];
    int length, j = 0;

    printf("Enter the text: ");
    fgets(word, 1000, stdin);

    length = strlen(word);
    if (word[length - 1] == '\n') {
        word[length - 1] = '\0';
        length--;
    }

    for (int i = length -1; i >= 0; i--) {
        reversed[j++] = word[i];
    }
    reversed[j] = '\0';

    printf("%s\n", reversed);

    return 0;
}