#include <stdio.h>

int main()
{
    char sentence[1000], new[1000];
    int i = 0, j = 0;

    printf("Enter the text: ");
    fgets(sentence, 1000, stdin);

    /*
    while (sentence[i] != '\0')
    {
        while (sentence[i] == '\t'){
            sentence[i] =- ' ';
        }
        i++;
    }
    */
   while (sentence[i] != '\0') {
        if (sentence[i] != ' ') {
            new[j++] = sentence[i];
        } else if (sentence[i] == ' ' && sentence[i - 1] != ' ') {
            new[j++] = ' ';
        i++;
    }


      printf("%s\n", sentence);

    return 0;
}
}