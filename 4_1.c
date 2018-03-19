/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temp;
    printf("Podaj temperature wody:\n");
    scanf("%f", &temp);
    if(temp < 0)
        printf("To juz lod!\n");
    else if(temp >= 0 && temp < 100)
        printf("Nudna ciecz.\n");
    else
        printf("O, wyparowala\n");
    return 0;
}
