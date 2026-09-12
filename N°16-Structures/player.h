#include <stdio.h>
#include <stdbool.h>


#ifndef __PLAYER__
    #define __PLAYER__

    struct Player
    {
        bool isActive;
        int level;
        char name[25];
    };

    typedef struct Player P;

#endif