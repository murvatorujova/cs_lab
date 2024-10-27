#include <stdio.h>

int main()
{
    int rows, colns;
    printf("Enter the number of riws and columns: ");
    scanf("%d%d", &rows, &colns);

    int matrix[rows][colns];
    int sumRows[rows];
    int sumColns[colns];

    for(int i = 0; i < rows; i++) sumRows[i] = 0;
    for(int j = 0; j < colns; j++) sumColns[j] = 0;

    //scanning
    printf("Enter matrix values: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colns; j++){
            scanf("%d", &matrix[i][j]);
            sumRows[i] += matrix[i][j];
            sumColns[j] += matrix[i][j];
        }
    }
    puts("");

    //printing
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("| %d", sumRows[i]);
        puts("");

    }
    
    for(int j = 0; j < colns; j++){
        printf(" _ ");
    }
    puts("");

    for(int j = 0; j < colns; j++){
        printf("%d ", sumColns[j]);
    }

}