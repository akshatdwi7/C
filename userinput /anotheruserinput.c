#include <stdio.h>
#include <string.h>
int main()
{
    int age;
    char name[25] = ""; // bytes
    printf("what do you think is your name is?\n");
    // scanf("%s", &name);
    fgets(name, 25, stdin);        // using this function we can read any white spaces also we don't need to add & before the name
    name[strlen(name) - 1] = '\0'; // to remove the new line character , this is also called string formating
    printf("what do you think is your age is?\n");
    scanf("%d", &age);
    printf("My name is lol as of now is  %s\n %d", name, age);
}