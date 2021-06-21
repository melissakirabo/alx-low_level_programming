#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    char s = " ";
    for(x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
        putchar(s);
    }
    return 0;
}
