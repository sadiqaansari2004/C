// program to find grade of a student
#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks scored by a student:\n");
    scanf("%d", &marks);
    if(marks>=70)
        printf("grade=distinction\n");
    else if(marks>=60)
        printf("grade=first class\n");
    else if(marks>=50)
        printf("grade=second class\n");
    else if(marks>=40)
        printf("grade=pass\n");
    else
        printf("grade=fail\n");
    return 0;
}
