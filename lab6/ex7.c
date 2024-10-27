#include <stdio.h> 
#include <string.h>

int main(){
    int n;
    printf("Enter the number of names you're going to enter: ");
    scanf("%d", &n);

    char names[n][51];

    printf("Enter the names:\n");
    for(int i = 0; i < n; i++){
        scanf("%s", names[i]);
    }

    char target[51]; 
    printf("Enter the target name: ");
    scanf("%s", target);

    int FoundIndex = -1; 
    for(int i = 0; i < n; i++){
        if(strcmp(names[i], target) == 0){// zero if they are equal
            FoundIndex = i;
            break;
        }
    }

    printf("%d\n", FoundIndex);

    return 0;
}