#include <stdio.h>

int main()
{
    int tallest, smallest, tposition = 1, sposition = 1, n, height;
    printf("How many students are measured? ");
    scanf("%d", &n);

    printf("Enter the height of student number 1: ");
    scanf("%d", &height);
    tallest = smallest = height;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter the height of student number %d: ", i);
        scanf("%d", &height);

        if (height > tallest)
        {
            tallest = height;
            tposition = i;
        }

        if (height < smallest)
        {
            smallest = height;
            sposition = i;
        }
    }

    printf("Student %d is the tallest, with the height %d\n", tposition, tallest);
    printf("Student %d is the smallest, with the height %d\n", sposition, smallest);

    return 0;
}
