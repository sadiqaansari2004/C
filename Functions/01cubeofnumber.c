// C program to find cube of a number using function
#include<stdio.h>

int cube(int num){
    return num*num*num;
}
int main(){
    int num;
    printf("Enter number to find cube of it:\n");
    scanf("%d", &num);
    printf("%d\n", cube(num));
    return 0;
}
