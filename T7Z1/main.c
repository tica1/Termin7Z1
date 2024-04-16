/*
 * Project template used for the "Embedded Software Development" course.
 */


#include "helper_library/helper.h"

void binarni(int broj1)
{
    int i = 0;
    int niz[32];

    for(i = 0; i < 32; i++)
    {
        niz[i] = broj1 % 2;
        broj1 = broj1/2;

        /*if((broj1 % 2) == 1)
        {
            niz[i] = 0;
        }
        else
        {
            niz[i] = 1;
        }

        broj1 = broj1/2;*/
    }
    print("Uneseni broj je 0b");
    for(i = 8; i >= 0; i--)
    {
        print("%d", niz[i]);
    }
    print("\n\n");
}


int main(void)
{
    helper_library_init();

    int broj;

    print("Unesite broj: ");
    scan("%d", &broj);

    binarni(broj);


    return 0;
}
