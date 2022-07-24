//Write a Program in C for taking input age from user and validate it by using conditional operator.


#include <stdio.h>
int main()
{
    int age;  //VARIABLE DECLARATION
    printf("Enter the your age\n"); //PRINTING STATEMENT FOR USER INPUT
    scanf("%d",&age); //TAKING AGE INPUT FROM USER
(age>=18)?(printf("\nYou can vote")):(printf("\nSorry You are underage vote")); // CONDITIONAL OPERATOR
}
