#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    //if (a is greater than b) is true then check (is a isn't equal to 0) if it is also true then print 1 else 0
    printf("%d\n", (a > b) && (a != 0));

    //if (a is less than b false) then check (is b equal to 0) if it is also false then print 0 else 1
    printf("%d\n", (a < b) || (b == 0));

    //if not (a is equal to b) then print 0 else 1
    printf("%d\n", !(a== b));
}