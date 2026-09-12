#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


struct Player
{
    bool isActive;
    int level;
    char name[25];
};


struct Player* createPlayer(char* name)
{
    struct Player* p = malloc(sizeof(*p));

    if(!p)
    { return NULL; }
        
    snprintf(p->name, sizeof p->name, "%s", name);
    p->level = 200;
    p->isActive = false;

    return p;
}


int main(void)
{
    struct Player* p1 = malloc(sizeof(*p1));

    if(!p1)
    {
        perror("ERREUR MALLOC ");
        exit(1);
    }

    snprintf(p1->name, sizeof p1->name, "%s", "Bruce Lee");
    p1->level = 100;
    p1->isActive = true;

    printf("Joueur %s, de niveau %d (actif : %s)\n", p1->name, p1->level, p1->isActive ? "oui" : "non");

    free(p1);
    p1 = NULL;


    printf("-- -- --\n");


    struct Player* p2 = createPlayer("Thomas");

    if (!p2)
    {
        perror("ERREUR MALLOC ");
        return 1;
    }

    printf("Joueur %s, de niveau %d (actif : %s)\n", p2->name, p2->level, p2->isActive ? "oui" : "non");

    free(p2);
    p2 = NULL;


    return 0;
}