#include <stdio.h>

struct Emp
{ // declaring employye struct here
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    struct Emp emp;

    scanf("%s %d %f", emp.name, &emp.emp_id, &emp.salary);

    printf("%s %d %.0f", emp.name, emp.emp_id, emp.salary);

    return 0;
}