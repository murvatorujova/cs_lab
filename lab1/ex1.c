#include <stdio.h>

int main(){
    int x;
    int y;
    scanf("%d", &x);

    if(x>0){
        y = x * x - 2 * x + 3;
    }
    else if(x==0){
        y = x - 5;
    }
    else{
        y = x * x - 2 * x - 3;
    }

    printf("%d", y);

    return 0;
}
