/*

    Structure : regroupement de plusieurs données (de types différents)

        - comment passer une structure à une fonction ?
        - comment renvoyer une structure depuis une fonction ?


*/

#include "point.h"
#include "player.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    struct Point2D pt = {.x = 155, .y = 48};      //  pareil que -->  struct Point2D pt = {155, 48};

    struct Player p = {.isActive = true, .name = "Chuck", .level = 1};



    printf("Taille de struct Point2D : %zu octets\n", sizeof(struct Point2D));
    printf("Taille de struct Player : %zu octets\n", sizeof(struct Player));


    printf("-- -- --\n");


    printf("Point2D : (%d;%d)\n",pt.x,pt.y);
    printf("Player : %s, de niveau %d\n",p.name, p.level);

    printf("-- -- --\n");

    pt.x = 100;
    snprintf(p.name, sizeof p.name, "%s", "Chuck Norris");

    printf("Point2D : (%d;%d)\n",pt.x,pt.y);
    printf("Player : %s, de niveau %d\n",p.name, p.level);




    return 0;
}