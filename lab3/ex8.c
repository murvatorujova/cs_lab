#include <stdio.h> 

int main(){
    int a, number = 1; 
    printf("Enter your intiger: "); 
    scanf("%d", &a); 

    for(int j = 1; j <= a; j++){        
        for(int i = 1 ; i <= a; i++){
            printf("%d ", number);
            number++; 
        }

        puts("");
    }



    return 0;
}