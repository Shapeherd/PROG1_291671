/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    signed int test_signed_int = 1;
    unsigned int test_unsigned_int = 1;
    short int test_short_int = 1;
    long int test_long_int = 1;
    short signed int test_short_signed_int = 1;
    short unsigned int test_short_unsigned_int = 1;
    long signed int test_long_signed_int = 1;
    long unsigned int test_long_unsigned_int = 1;
    float test_float = 1;
    double test_double = 1;
    long double test_long_double = 1;
    signed char test_signed_char = 1;
    unsigned char test_unsigned_char = 1;
    printf("Długość dla poszczególnych typów:\n");
    printf("signed int: %dB\n", sizeof(test_signed_int));
    printf("unsigned int: %dB\n", sizeof(test_unsigned_int));
    printf("short int: %dB\n", sizeof(test_short_int));
    printf("long int: %dB\n", sizeof(test_long_int));
    printf("short signed int: %dB\n", sizeof(test_short_signed_int));
    printf("short unsigned int: %dB\n", sizeof(test_short_unsigned_int));
    printf("long signed int: %dB\n", sizeof(test_long_signed_int));
    printf("long unsigned int: %dB\n", sizeof(test_long_unsigned_int));
    printf("float: %dB\n", sizeof(test_float));
    printf("double: %dB\n", sizeof(test_double));
    printf("long double: %dB\n", sizeof(test_long_double));
    printf("signed char: %dB\n", sizeof(test_signed_char));
    printf("unsigned char: %dB\n", sizeof(test_unsigned_char));
    return 0;
}
