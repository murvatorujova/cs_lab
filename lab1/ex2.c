#include <stdio.h>

int main(){
    int x; 
    printf("Enter your x:");
    scanf("%d", &x);

    if(x == 0){
        printf("The number is neither odd nor even");
    }
    else if(x % 2 == 0){
        printf("%d is even", x);
    }

    else{
        printf("%d is odd", x);
    }
}    
