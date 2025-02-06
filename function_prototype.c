#include <stdio.h>

// this is called function prototype and we decalre it before the main function so that we do not the erro while writing the main function
void hello(char bro[], int age);
int main()
{

    char bro[] = "Bro code";
    int age = 21;
    hello(bro, age);
}
void hello(char bro[], int age)
{
    printf(" hello %s ! \n", bro);
    printf(" you age is %d years old ", age);
}