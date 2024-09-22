#include <stdio.h> 

int main(){
    int a; 
    printf("Enter your number:");
    scanf("%d", &a);

    if(a % 6 == 0){
        printf("Excelent!");
    }
    else if(a % 2 == 0){
        printf("OK");
    }
    else if(a % 3 == 0){
        printf("OK");
    }
    else{
        printf("NOOOOOOOO"); 
    }

    return 0;
}