#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'A';                      // single character %c
    char b[] = "BRO";                  // array of characters %s
    float c = 3.14432432;              // float %f 4 bytes 6-7 digits (32 bits of precision)
    double d = 3.14159265358979323846; // double %lf 8 bytes 15-17 digits (64 bits of precision)
    printf("%0.15lf\n", d);            // double %lf
    bool e = true;                     // bool %d 1 byte
    char f = 100;                      // 1 byte (-128 to +127 ) %d or %c ASCII value
    unsigned char w = 90;              // 1 byte (0 to 255) %d or %u or %c ASCII value
    printf("%c\n", w);
    short int h = 8932;                 // 2 bytes (-32768 to +32767) %d
    long long int y = 4829340949814174; // 8 bytes (-9223372036854775808 to +922337203685477580 speed of light
    printf("%lld\n", y);
}