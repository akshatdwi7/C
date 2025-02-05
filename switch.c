/*Switch case is the best alternative for many else if statements, allows a value to be
tested against many values, reducing the need for many else if statements.*/
//  solve grade quwstion in switch case

#include <stdio.h>

int main()
{

    char grade;
    printf(" what is your grade in the exams in capital letter?");
    scanf("%s", &grade);

    switch (grade)
    {
    case 'A':
        printf("you are aswon");
        break;
    case 'B':
        printf("you are good");
        break;
    default:
        printf(" nah you are failed lol");
    }
}
