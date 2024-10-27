#include <stdio.h>

int main()
{
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int arr[n], idx, el;

    for (int i = 0; i < n; i++)
    {
        printf("Intiger %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index: "); 
    scanf("%d", &idx);
    printf("Enter the number: "); 
    scanf("%d", &el);

    if (idx < 0 || idx > n) {
        printf("Out of boundaries\n");
        return 0;
    }

    int newArr[n + 1];

    for (int j = 0; j < n + 1; j++) {
        if (j < idx) {
            newArr[j] = arr[j];
        } else if (j == idx) {
            newArr[j] = el; 
        } else {
            newArr[j] = arr[j - 1]; 
        }
    }


    printf("New array:\n");
    for (int j = 0; j < n + 1; j++) {
        printf("%d ", newArr[j]);
    }
    printf("\n");



    /*for(int j = 0; j < n; j++){
        arr[n] += el;
        printf("%d", arrj);
    }*/


    return 0;
}