#include <stdio.h>

int main(){
    char word[1000];
    int count = 1, i = 0;

    printf("Enter a text: ");
    fgets(word, 1000, stdin);

//unnec
    while(word[i] != 0){
        if(word[i] == '\n'){
            word[i] = '\0';
            break;
        }
        i++;
    }


    i = 0;
     while (word[i] != '\0')  
    {
        if (word[i] == '#') 
        {
            count++; 
        }
        i++;
    }

    printf("Number of words: %d\n", count);

    return 0;
}