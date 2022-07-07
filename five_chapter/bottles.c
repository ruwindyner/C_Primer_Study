#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX +1;

    while(--count > 0)
    {
        printf("%d bottles of spring water on the Wall,"
                "%d bottles of spring water!", count, count);
        printf("Take one down an pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}
