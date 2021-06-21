#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    char s = ' ';
    putchar(s);
    for(x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));   
    }
    
    return 0;
}
