//Write a function that returns the earned points in a single toss of a Darts game.
//commit 3
#include <stdio.h>
#include <math.h>
int points(int , int); // prototype
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Entered coordinates are:(%d,%d)",x,y);
    points(x,y); //call
    return 0;
}
int points(int x,int y) //definition
{
    float radius;
    radius = sqrt(pow(x,2)+pow(y,2)) ;
    if(radius > 0 && radius <= 1){
        printf("\npoints earned : 1");//inner circle
    }
    else if(radius > 1 && radius <= 5){
        printf("\npoints earned : 5");//middle circle
    }
    else if(radius > 5 && radius <= 10){
        printf("\npoints earned : 10");//outer circle
    }
    else {
        printf("\nPoints earned : 0");//out of reach
    }

}
//commit 2
