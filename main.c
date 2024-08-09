#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    if(N >= 1 && N <= 99) {
        for(int i = 1; i <= N; i++) {
            for(int u = 1; u <= N - i; u++)
                printf(" ");
            for(int y = 1; y <= (2 * i) - 1; y++)
                printf("*");
            printf("\n");
        }
        for(int i = N; i > 0; i--) {
            for(int u = 1; u <= N - i; u++)
                printf(" ");
            for(int y = 1; y <= (2 * i) - 1; y++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
