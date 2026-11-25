#include <stdio.h>
int main(){
    int x = 12;
    x += 5;  // x = 12 + 5 --> 17
    x *= 2;  // x = 17 * 2 --> 34
    x -= 8;  // x = 34 - 8 --> 26
    x /= 3;  // x = 26 / 3 --> 8.667
    printf("%d", x);   // cause of integer format specifier ans will be 8 and the floating values are gonna waste
    return 0;
}