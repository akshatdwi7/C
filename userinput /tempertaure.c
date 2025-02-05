#include <stdio.h>
#include <ctype.h>
int main()
{
    char t;
    printf(" what is you c ");
    scanf("%c", &t);
    t = toupper(t);
    printf("%c", t);
}