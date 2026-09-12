#include "point.h"
#include "player.h"
#include <stdio.h>
#include <stdbool.h>


void levelUp(struct Player* p)
{
    p->level++;
}


int main(void)
{
    struct Player p1 = {.isActive = true, .name = "Chuck", .level = 1};

    printf("Joueur %s de niveau %d\n",p1.name, p1.level);

    levelUp(&p1);

    printf("Joueur %s de niveau %d\n",p1.name, p1.level);



    return 0;
}
