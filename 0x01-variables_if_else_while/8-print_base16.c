#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    for(x = 0; x <= 9; x++)
    {
        printf("%d",x);
    }
    for(x = 'A'; x <= 'F'; x++)
    {
        putchar(toupper(x));
    }
    putchar('\n');
    return 0;
}
