#include "point.h"
#include "player.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    struct Point2D point = {.x = 155, .y = 48};
    struct Point2D* ptrPoint = &point;


    printf("(%d;%d)\n", point.x, point.y);
    printf("(%d;%d)\n", ptrPoint->x, ptrPoint->y);    // pareil que -->  printf("(%d;%d)\n", (*point).x, (*point).y);

    ptrPoint->x = 100;
    point.y = 101;

    printf("(%d;%d)\n", point.x, point.y);
    printf("(%d;%d)\n", ptrPoint->x, ptrPoint->y);

    return 0;
}
