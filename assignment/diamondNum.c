#include <stdio.h>
int main(){
    int n;
    printf("Enter the length of the pattern: ");
    scanf("%d", &n);
    int count = 0;
    for(int r1=1; r1<=n; r1++){
        ++count;
        for(int s1=1; s1<=n-r1; s1++){
            printf(" ");
        }
        for(int c1=1; c1<=r1; c1++){
            printf("%d", count);
        }
        printf("\n");
    }
    for(int r2=n-1; r2>0; r2--){
        --count;
        for(int s2=1; s2<=n-r2; s2++){
            printf(" ");
        }
        for(int c2=1; c2<=r2; c2++){
            printf("%d", count);
        }
        printf("\n");
    }
}