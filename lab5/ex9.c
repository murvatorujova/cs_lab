#include <stdio.h>
#include <string.h>

int main() {
    char text[100], target[100];
    
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // Remove newline character if present

    printf("Enter the search value: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0';  // Remove newline character if present

    // Find the first occurrence of target in text
    char *position = strstr(text, target);
    
    if (position != NULL) {
        // Calculate and print the starting index
        int index = position - text + 1;
        printf("%d\n", index);
    } else {
        printf("Search value is not found in the text.\n");
    }

    return 0;
}