#include <stdio.h>

int main()
{
    int x;
    for(x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
    }
    return 0;
}
