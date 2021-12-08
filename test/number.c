#include <stdio.h>

void fonc(int *pa)
{
    *pa = 10;
    *pa = 5;
}
 
int main()
{
    int a;
 
    fonc(&a);
 
    printf("a = %d", a);
 
    return 0;
}