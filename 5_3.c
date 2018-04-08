#include <stdio.h>
#define to_kelvin 273
int main()
{
    int temp;
    const float to_rankine = 9.0/5.0;
    float celcjusz = 0.0;
    char choice = 'n';
    do
    {
        printf("Podaj temperature w stopniach F\n");
        scanf("%d", &temp);
        celcjusz = 5.0/9*(temp-32);
        printf("Temperetura to %.1f stopnia C\n", celcjusz);
        printf("I zarazem %.1f K\n", celcjusz+to_kelvin);
        printf("I zarazem %.1f R\n", (celcjusz+to_kelvin)*to_rankine);
        printf("Czy chcesz dokonac ponownej zamiany? Wcisnij (y) jesli tak.\n");
        getchar();
        scanf("%c", &choice);
    }
    while(choice == 'y');
    return 0;
}