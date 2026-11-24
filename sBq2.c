#include <stdio.h>
int main(){
    int a=8, b=3, c=2;
/*  here,
    first:   8 + [3 * 2] - 8 / 3 + 8 % 3
    second:  8 + 6 - [8 / 3] + 8 % 3   
    third:   8 + 6 - 2 + [8 % 3]
    fourth: [8 + 6] - 2 + 2  
    fifth:  [14 - 2] + 2
    sixth:  [12 + 2]
    final:   14        */
    int result = a + b * c - a / b + a % b;
    printf("%d", result);
    return 0;
}