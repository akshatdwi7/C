// Continue = skips the rest of the code and forces then next iteration of the loop
// break = exists a loop / switch
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 20; i++)
    {
        if (i == 10)
        {
            break; // this will end the code at that point of time.
            // continue; this will take out that numbr and skip the code
        }
        printf("%d\n", i);
    }
}
