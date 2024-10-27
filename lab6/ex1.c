#include <stdio.h> 

int main(){

    int n; 
    printf("ENter the value of n: ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum under the diagonal is: %d", sum);

    return 0;
}