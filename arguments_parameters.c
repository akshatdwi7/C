#include <stdio.h>

void birthday(int age, char owner) // parameter is what a function expects when its called , these paramters accpets the argyments
{
    printf(" Hey owner of this computer %c\n ", owner);
    printf("your computer is %d years old today\n", age);
}

int main()
{

    int age = 21;
    char owner = 'W';
    birthday(age, owner); // argyments
}