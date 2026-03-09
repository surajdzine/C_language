// wrtie a program to calculate area of a circle (radius is given )
#include<stdio.h>
int main(){
    float radius;
    // ask for the length of the radius 
    printf("radius of the circle :");
    scanf("%f",&radius);
    float mult = 3.14*radius*radius;
    printf("so the area of the circle is :%f",mult);
    return 0;
}

// if we want value in point always use float dont randomly use int function everwhere 