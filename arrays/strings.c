#include <stdio.h>
#include <string.h>

int main()
{

    char cars[23][900] = {
        {"tesla", "ford", "mg", "bmw", "toyota"},
        {" swift ", "alto", "wagonr", "dizo", "i20"},
    };

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
}
