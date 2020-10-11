#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>

void szamkitalalo()
{
    int kitalalando, bemenet;

    kitalalando = rand() % 100 + 1;
    bemenet = 0;

    printf("Indul a talalgatas 1 es 100 kozott \n");

    while(kitalalando != bemenet){
        printf("Tippelj: ");
        scanf("%d", &bemenet);

        if(kitalalando < bemenet)
        {
            printf("Nem jo, tippelj kisebbet\n");
        }
        if(kitalalando > bemenet)
        {
            printf("Nem jo, tippelj nagyobbat\n");
        }
    }
    printf("Talalt!\n");
}

int main(void)
{
	char igen_nem;

    srand(time(0));

    while (1)
    {
        szamkitalalo();

        printf("Jatszunk tovabb? [i/n]");
        scanf("%s", &igen_nem);
        if(igen_nem != 'i')
            break;
    }
    return 0;
}
