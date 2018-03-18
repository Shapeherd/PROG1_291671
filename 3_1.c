/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>
#include <float.h>

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
    char test_char = 1;
    signed char test_signed_char = 1;
    unsigned char test_unsigned_char = 1;
    printf("Długość i wartości skrajne dla poszczególnych typów:\n");
    printf("signed int: %dB, min: %d, max: %d\n", sizeof(test_signed_int), INT_MIN, INT_MAX);
    printf("unsigned int: %dB, min: 0, max: %ld\n", sizeof(test_unsigned_int), UINT_MAX);
    printf("short int: %dB, min: %d, max: %d\n", sizeof(test_short_int), SHRT_MIN, SHRT_MAX);
    printf("long int: %dB, min: %ld, max: %ld\n", sizeof(test_long_int), LONG_MIN, LONG_MAX);
    printf("short signed int: %dB, min: %d, max: %d\n", sizeof(test_short_signed_int), SHRT_MIN, SHRT_MAX);
    printf("short unsigned int: %dB, min: 0, max: %d\n", sizeof(test_short_unsigned_int), USHRT_MAX);
    printf("long signed int: %dB, min: %ld, max: %ld\n", sizeof(test_long_signed_int), LONG_MIN, LONG_MAX);
    printf("long unsigned int: %dB, min: %d, max: %lld\n", sizeof(test_long_unsigned_int), 0, ULONG_MAX);
    printf("lld nie wystarcza do wyswietlenie long unsigned int\n");
    printf("float: %dB, min: %.10e, max: %.10e\n", sizeof(test_float), FLT_MIN, FLT_MAX);
    printf("double: %dB, min: %.10e, max: %.10e\n", sizeof(test_double), DBL_MIN, DBL_MAX);
    printf("long double: %dB, min: %.10e, max: %.10e\n", sizeof(test_long_double), LDBL_MIN, LDBL_MAX);
    printf("char: %dB, min: %d, max: %d\n", sizeof(test_char), CHAR_MIN, CHAR_MAX);
    printf("signed char: %dB, min: %d, max: %d\n", sizeof(test_signed_char), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: %dB, min: %d, max: %d\n", sizeof(test_unsigned_char), 0, UCHAR_MAX);
    return 0;
}
