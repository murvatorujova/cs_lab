#include <stdio.h>

int main()
{
    int x, y, st1, st2;
    printf("Enter the coordinates of the runners and then speed(number of steps) of each accordingly: ");
    scanf("%d%d%d%d", &x, &y, &st1, &st2);
    int o1 = x; // original value of x
    int o2 = y; // original value of y
    int check = o1 > o2;

    if(x = y){
        printf("they are on the same point - they have alredy met");
    }

    if (st1 == 0 && st2 == 0)
    {
        printf("they're not moving");
    }

    else if ((x < y && st1 <= st2) || (x > y && st1 >= st2))
    {
        printf("they will never meet");
    }

    else
    {
        for (int time = 0;; time++)
        {
            if (x == y)
            {
                printf("They meet at time %d at coordinate %d\n", time, x);
            }
            if (o1 > o2 && x < y)
            {
                printf("they have passed each other");
                break;
            }
            else if (!check && x > y){
                printf("they have passed each other");
                break;
            }
            x += st1;
            y += st2;
        }
    }
    return 0;
}