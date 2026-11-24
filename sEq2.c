#include <stdio.h>
int main(){
    int a = 7, b = 4, c = 2, result;
/*  //it checks (if a is greater than b) then execute left operation (a + c)
    otherwise execute right operation (b * c)           */
    printf("%d", (a > b) ? a+c : b*c);
    return 0;
}