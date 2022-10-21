// C program to find diameter, circumference and area of circle using function
#include<stdio.h>
#define PI 3.141
float diameter(float r){
    return r*r;
}
float circumference(float r){
    return 2*PI*r;
}
float area(float r){
    return PI*r*r;
}
int main(){
    float radius;
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);
    printf("Diameter= %f\n", diameter(radius));
    printf("Circumference= %f\n", circumference(radius));
    printf("Area= %f\n", area(radius));
    return 0;
}
