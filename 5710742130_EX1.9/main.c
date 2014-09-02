#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-100\n",1000);//False
    printf("%c\n","This is string");//False
    printf("%*.*if\n",8,3,1024.987654);//True
    printf("% ld\n%+ld\n",100000,1000000);//True
    printf("%10.2E\n",444.93738);//True
    printf("%d\n",10.987);//False
    system("pause");
    return 0;
}
