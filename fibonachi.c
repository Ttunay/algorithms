#include <stdio.h>

int main()
{
    int a,b;

    for(;a<100;a++)
    {
        printf("%d",a);
        int v = a+b;
        a = b;
        b = v;
    }
    return 0;
}