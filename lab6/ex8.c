#include <stdio.h> 
#include <string.h>

int mani(){

    int n;
    printf("Enter the number of names you're going to enter: ");
    scanf("%d", &n);

    char names[n][51];

    printf("Enter the names:\n");
    for(int i = 0; i  < n; i ++){
        scanf("%s", names[i]);
    }

    char target[51];
    printf("Enter the target substring: ");
    scanf("%s", target);

    int found = 0; 
    for(int i = 0; i < n; i++){
        if(strstr(names[i], target) != NULL){
            printf("Name: %s, Index: %s", names[i], i);
            found = 1;
        }
    }

    if(!found){
         printf("No names found containing \"%s\".\n", target);
    }


    return 0;
}