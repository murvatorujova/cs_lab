#include <stdio.h> 
#include <limits.h>

int main(){
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int max = INT_MIN, min = INT_MAX;
    int sum = 0, num;
    int countMin =1, countMax =1;


    for (int i = 0; i < n; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &num); 
        
        sum += num; 
        
        if (num > max) {
            max = num; 
            countMax = 1;  // Reset to 1 for the new max
        } else if (num == max) {
            countMax++;  // Increment count if the current num equals max
        }
       
        if (num < min) {
            min = num;
            countMin = 1;  // Reset to 1 for the new max
        } else if (num == min) {
            countMin++;  // Increment count if the current num equals max
        }
    
    }

    int result = sum - ((min*countMin) + (max*countMax));
    printf("Sum: %d\n", result);

return 0;
}