#include <stdio.h>
#include <string.h>

int main()
{

    int w = 90;
    int l = 10;

    printf(" W =%d\n", w);
    printf(" L = %d\n", l);

    int realplayer;

    realplayer = w;
    w = l;
    l = realplayer;

    printf("new W = %d\n", w);
    printf("new L = %d", l);
}