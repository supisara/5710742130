#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Enter Salary: ");
    scanf("%f",&x);
    y=x*0.1;
    printf("Salary: %.2f\n",x);
    printf("Tax: %.2f\n",y);
    system("pause");
    return 0;
}
