#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    for(x = '0'; x <= '9'; x++)
    {
        putchar(x);
        putchar(', ');
    }
    putchar('\n');
    return 0;
}
