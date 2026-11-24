#include <stdio.h>
int main(){
    int a = 5, b = 3;
    printf("%d %d %d %d", a&b, a|b, a^b, a<<1);
    return 0;
}
/*
________________________________
             4   2   1
________________________________
for a =      1   0   1
for b =      0   1   1
________________________________
a & b =      0   0   1      ans --> 1  // in the and operation only show 1(when all operators are 1) otherwise 0

________________________________
             4   2   1
________________________________
for a =      1   0   1
for b =      0   1   1
________________________________
a | b =      1   1   1      ans --> 7  // in the or operation it will show 1 (when atleast one of the operator is 1) other wise 0

________________________________
             4   2   1
________________________________
for a =      1   0   1
for b =      0   1   1
________________________________
a ^ b =      1   1   0      ans --> 6  // in the xOR operation it will show 0 (when all operations are same) otherwise 1

________________________________
            8   4   2   1
________________________________
for a    =      1   0   1
            <-- <-- <--
a << 1   =  1   0   1   0   ans --> 10  // it is left shift which tell us to move left side n bit and at right side it is same as 0 then empty
*/