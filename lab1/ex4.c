#include <stdio.h> 
#include <math.h>

int main(){
    int a, b, c, D, root1, root2; 
    printf("Enter a, b, and c:");
    scanf("%d %d %d", &a, &b, &c);

    D = b * b - 4 * a * c; 

    if(D > 0){
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a); 
        printf("Two distinct roots are: %d %d", root1, root2);
    }
    else if(D ==0){
        root1 = -b / (2 * a);
        printf("There is only one root, root1 = root2 = %d", root1);
    }
    else{
        printf("No real roots");
    }

    

    return 0;
}