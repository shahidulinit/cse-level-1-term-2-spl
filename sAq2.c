#include <stdio.h>
int main(){
    int a = 10, b = 4;
    int x = a++ + ++b;  // it will add 10 + 5 and update and store the value of a 10 --> 11 for the next operation
    printf("%d %d %d", a, b, x); //here a = 11
    return 0;
}