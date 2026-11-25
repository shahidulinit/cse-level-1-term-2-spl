#include <stdio.h>
int main(){
    int a;
    float b, sum, average;
    scanf("%d %f", &a, &b);
    sum = (float)a + b;
/*  //we want sum value in floating point but int + float
    will show error that's why we need to typecast and turn integer into float value.  */
    average = ((float)a + b)/2;
    printf("Sum: %.2f\nAverage: %.2f\n", sum, average);
    return 0;
}