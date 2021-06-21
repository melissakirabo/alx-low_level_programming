#include <stdio.h>

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x))
        putchar(toupper(x))
    }
    putchar('\n')
    return 0;
}
