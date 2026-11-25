#include <stdio.h>
int main(){
    int n;
    printf("Enter the length of the pattern: ");
    scanf("%d", &n);
    for(int r=1; r<=n; r++){
        for(int c=1; c<=n; c++){
            printf("# ");
        }
        printf("\n");
    }
}