#include <stdio.h>

int main(){
    char word[1000];
    int count = 1, i = 0;

    printf("Enter a text: ");
    fgets(word, 1000, stdin);


    while (word[i] != '\0')  
    {
        if (word[i] == '#') 
        {
            word[i] = '_';
        }
        i++;
    }

    printf("%s\n", word);

    return 0;
}