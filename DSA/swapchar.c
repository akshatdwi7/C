#include <stdio.h>
#include <string.h>
// string copy function won't work untill the size of the array of char is the same
int main()
{

    char cars[15] = " BMW ";
    char Bikes[15] = "Ducatti";
    char Fun[15];

    printf("cars:%s\n", cars);
    printf("Bikes:%s\n", Bikes);
    strcpy(Fun, cars);
    strcpy(cars, Bikes);
    strcpy(Bikes, Fun);
    printf(" Cars: %s\n", cars);
    printf(" Bikes: %s\n", Bikes);
}