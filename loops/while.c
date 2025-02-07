// create a loop which as user to print the name and ask it untill it prints the exact same name
#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    printf(" hey what is your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // to get the new line character

    while (strlen(name) == 0)
    {
        printf("  you haven't put anything! PUT IT");
        printf(" hey what is your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf(" Heloww %s", name);
    return 0;
}