#include <stdio.h>

int main()
{
    unsigned short int does_breath=0, does_react=0, aed=1;
    if(!does_react && !does_breath)
    {
        printf("Zadzwon po pogotowie!\n");
        getchar();
        do
        {
            printf("Wykonaj 30 ucisniec klatki\n");
            printf("Wykonaj 2 oddechy ratownicze\n");
            if(aed)
                printf("Uzyj AED");
            getchar();
        }
        while(!does_breath);
    }
    return 0;
}