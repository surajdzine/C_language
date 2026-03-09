// write a program to calcualte area of a sqaure (side is given)
#include<stdio.h>
int main(){
    int a;
    // ask for the length of the side 
    printf("length of one side :");
    scanf("%d",&a);//here i take input of the side length 
    // now i multiply the side by each other 
    int mult = a * a ;
    printf("so the area of the given lenght sqaure is %d", mult);
    return 0;
}