#include <stdio.h>
int main(){
    int n;
    printf("Enter the length of the pattern: ");
    scanf("%d", &n);
    for(int r=n; r > 0; r--){
        char ch = 'A';
        for(int s=1; s <= n-r; s++){
            printf(" ");
        }
        for(int c=1; c <= r; c++){
            printf("%c", ch++);
        }
        printf("\n");
    }
}