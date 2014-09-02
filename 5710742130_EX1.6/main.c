#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf ("Input 3 Number : ");
    scanf ("%d %d %d" ,&a,&b,&c);
    x = (a+b+c)/3;
    printf("Sum : %d",x);
    return 0;
}
