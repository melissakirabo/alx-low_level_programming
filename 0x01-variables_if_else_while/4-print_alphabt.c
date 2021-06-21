#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;     
    for(x = 'A'; x <= 'Z'; x++)
    {         
        
        if (x == 'E' || x == 'Q') 
        {
            continue;
        }
        putchar(tolower(x)); 
    }
    putchar('\n');
    return 0;
}
