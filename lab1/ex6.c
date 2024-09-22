#include <stdio.h> 

int main(){

    int t1, t2, t3, t4, tAll;
    printf("Enter the duration of the first task: ");
    scanf("%d", &t1);

    printf("Enter the duration of the second task: ");
    scanf("%d", &t2);

    printf("Enter the duration of the third task: ");
    scanf("%d", &t3);

    printf("Enter the duration od the fourth task: ");
    scanf("%d", &t4);

    tAll = t1; //we start with assigning the total time to one of the variables, for example t1

    if (t2 > tAll){
        tAll = t2;
    }
    if (t3 > tAll){
        tAll = t3;
    }
    if (t4 > tAll){
        tAll = t4;
    }

    printf("Time required to complete all the tasks equals to %d", tAll);

    return 0;

}