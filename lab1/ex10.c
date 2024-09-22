#include <stdio.h>
#include <math.h>

int main(){
    int x, y, x0, y0, radius; 
    float distance; 
    printf("Enter the central point(x0, y0) of the circle: ");
    scanf("%d %d", &x0, &y0);

    printf("Enter the radius of a circle: "); 
    scanf("%d", &radius);

    printf("Enter the (x,y) coordinates of an arbitrary point on the plain: "); 
    scanf("%d %d", &x, &y); 

    distance = sqrt((x - x0)*(x - x0) + (y - y0)*(y - y0)); 

    if (distance > radius){
        printf("The point is OUTSIDE the circle");
    }
    if (distance == radius){
        printf("The point is ON the circle");
    }
    if (distance < radius){
        printf("The point is INSIDE the circle");
    }
    
    return 0;
}