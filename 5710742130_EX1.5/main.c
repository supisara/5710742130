#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter String: ");
    scanf ("%c",&x);
    if(x>='A'&&x<='Z')
    {
        printf ("%c",tolower(x));
    }
    if(x>='a'&&x<='z')
    {
        printf ("Wrong");
    }
    return 0;
}
