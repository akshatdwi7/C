// % is called format specifiers = defines and format type of data to be displayed

/*
%c = character
%d = interger
%f = float
%lf = double
%s = string

%0.2 f = 2 decimal places
%0.2lf = 2 decimal places
%1 = minimum field weidth
%- = left align
*/

#include <stdio.h>
int main()
{
    double item = 7464.2332;
    printf("The cost of the product is $%1lf \n", item);
}