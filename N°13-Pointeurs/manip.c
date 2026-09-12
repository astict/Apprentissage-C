#include <stdio.h>

int main(void)
{
    int n = 68;
    int* ptr = &n;

    printf("n = %d\n",n);
    *ptr = 47;
    printf("n = %d\n",n);

    return 0;
}