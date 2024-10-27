#include <stdio.h>

int main(){
    int n;
    printf("How many intigers are you going to enter?: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Intiger %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //linimg up the sequence
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("Distinct elements and their counts:\n");
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        printf("%d appears %d times\n", arr[i], count);
    }

    return 0;
}