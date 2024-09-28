#include <stdio.h>
#include <math.h>

/*int main()
{
    int n, x, y, x0, y0, radius;
    float distance;
    printf("Enter the central point(x0, y0) of the circle: ");
    scanf("%d %d", &x0, &y0);

    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    printf("How many coordinates are you planning to measure?: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter the (x,y) coordinate of an arbitrary point on the plain: ");
        scanf("%d %d", &x, &y);
        distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
        if (distance > radius)
        {
            printf("The point is OUTSIDE the circle");
        }
        if (distance == radius)
        {
            printf("The point is ON the circle");
        }
        if (distance < radius)
        {
            printf("The point is INSIDE the circle");
        }
    }

    return 0;
}

this solution is without EOF, i thought it's pretty cool, so i'll leave it there*/

int main()
{
    int x, y, x0, y0, radius;
    float distance;
    printf("Enter the central point(x0, y0) of the circle: ");
    scanf("%d %d", &x0, &y0);

    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    printf("Enter the (x,y) coordinates of an arbitrary point on the plain\n ");
    while (scanf("%d %d", &x, &y) == 2) // while there are two valid coordinate inputs
    {
        distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

        if (distance > radius)
        {
            printf("The point (%d;%d) is OUTSIDE the circle\n", x, y);
        }
        if (distance == radius)
        {
            printf("The point (%d;%d) is ON the circle\n", x, y);
        }
        if (distance < radius)
        {
            printf("The point (%d;%d) is INSIDE the circle\n", x, y);
        }
    }

    return 0;
}
