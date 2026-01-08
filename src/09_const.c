#include <stdio.h>

int main(void)

{
    const int num = 35353;     // first declaration
    printf("%d\n", num);

    int num = 344;
    printf("%d\n" , num);   // ❌ redeclaration in same scope
 
}