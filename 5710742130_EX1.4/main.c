#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    while(1)
    {
    printf("Enter loan principal (-1to end)");
    scanf ("%f",&a);
    printf("Enter interest rate");
    scanf ("%f",&b);
    printf ("Enter term of the loan in days");
    scanf ("%f",&c);
    x=(a*b*c)/365;
    printf ("The interest charge is %10.2f\n",x);
    }
    system("pause");
    return 0;
}
