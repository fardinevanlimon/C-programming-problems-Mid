#include <stdio.h>

int main() {

    int n, n2;
    scanf("%d %d", &n, &n2);
    int a[n][n2];

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    int b = 0, e = n2-1;

    for(int i=0; i<n; ++i) {
        if(b!=e) {
            int temp = a[i][b];
            a[i][b]  = a[i][e];
            a[i][e] = temp;
        }
        ++b;
        --e;
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}