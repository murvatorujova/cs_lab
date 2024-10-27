#include <stdio.h> 

int main(){

    int n, m; 
    printf("Enter the value of n and m: ");
    scanf("%d%d", &n, &m);

    int arr[n][m];
    int res[m][n];
    printf("Enter the elements of the %d x %d matrix:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = arr[j][i];
            printf("%d ", arr[j][i]);
        }
        puts("");
    }


    return 0;
}