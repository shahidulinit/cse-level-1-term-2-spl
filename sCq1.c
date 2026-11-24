#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
/*  here it is a ternary operation where we will check the right most operation if b is less than c then it stores the value 'b' for the right side
    and then it will check the left sides condition that if a is less than c then it stores the value of 'a' for the left side
    and after these two operation lastly check that if a is less than b if yes than print the left value which were stored by previous operation.  */
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("min: %d", min);
    return 0;

    //Summery: ternary operators check the condtitions and stores/prints left side statements when the condition is true
    //         when provided condition is false prints right statements. 
}