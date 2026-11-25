#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    printf("%d %c\n", ch, ch+1); 
//  for int format specifier it will show ASCII value first than
//  because of char format specifier it will add 1 to the ASCII value and show the updated value in character
    return 0;
}