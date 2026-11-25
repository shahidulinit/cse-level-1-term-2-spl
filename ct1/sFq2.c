#include <stdio.h>
int main(){
    int a = 6, b = 2, c = 5;
    a = a + b * c;
    b = a-- - ++c;
/*  Here a-- might looks confusing but a-- (post decrement)
    will show us the original(present) value first then updates to new value
    and will show the updated value in the next operation. */
    c = a + b;
    printf("%d %d %d", a, b, c);
    return 0;
}