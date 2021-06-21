#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;     
    for(x = 'Z'; x >= 'A'; x--)
    {
        putchar(tolower(x));   
    }
    putchar('\n');
    return 0;
}
