#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter Number : ");
    scanf ("%d",&a);
    if (a%7 == 0)
    {
        printf ("True");
    }
    if (a%7 != 0)
    {
        printf ("False");
    }
    return 0;
}
