#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    int lower_x;
    for(x = 'A'; x <= 'Z'; x++)
    {
        lower_x = tolower(x);
        putchar(lower_x);
    }
    return 0;
}
