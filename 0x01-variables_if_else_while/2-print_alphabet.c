#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    string s = " ";
    for(x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
        putchar(s);
    }
    return 0;
}
