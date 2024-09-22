#include <stdio.h>


int main(){
    int width, length, height, radius; 
    float volumeBox, volumeBall;
    const float PI = 3.14159;

    printf("Enter the width, lenght, and radius of the box: ");
    scanf("%d %d %d", &width, &length, &height);

    printf("Enter the radius of the ball: "); 
    scanf("%d", &radius); 

    volumeBox = width * length * height; 
    volumeBall = PI * radius * radius;

    if (volumeBox > volumeBall){
        printf("You can send the ball a the box");
    }
    else{
        printf("NO GOD NO PLEASE NO NOOO!"); //meaning no, you can't send the ball
    }

    return 0;
}