#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter integer: ");
    scanf("%d",&a);
    printf("Convert to base 8: %o\n",a);
    printf("Convert to base 16: %x\n",a);
    system("pause");
    return 0;
}
