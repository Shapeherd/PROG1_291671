#include <stdio.h>

int main()
{
    unsigned short int x, i, sum = 0;
    printf("Wprowadz liczbe z przedzialu od 3 do 100.\n");
    scanf("%d", &x);
    if(x < 3 || x > 100)
    {
        printf("Wprowadzono niewlasciwa liczbe, program zakonczy dzialanie.\n");
        return 0;
    }
    for(i = 0; i <= x ; i++)
    {
        printf("%d ", i);
        sum = sum+i;
    }
    printf("\nSuma wynosi: %d", sum);
    return 0;
}
