#include <stdio.h>

int a[100][100];

void input(int n, int n2, int index, int index2) {
    if(index==n && index2==n2) return;
    if(n2==index2) {
        ++index;
        index2 = 0;
    }
    scanf("%d", &a[index][index2++]);
    input(n, n2, index, index2);
}

int max(int n, int n2) {
    int m = a[0][0];
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) {
            if(m<a[i][j]) m = a[i][j];
        }
    }
    return m;
}

int min(int n, int n2) {
    int m = a[0][0];
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) {
            if(m>a[i][j]) m = a[i][j];
        }
    }
    return m;
}

int main() {

    int n, n2;
    scanf("%d %d", &n, &n2);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n2; ++j) a[i][j] = 0;
    }

    input(n, n2, 0, 0);

    printf("Minimum value in 2d array is %d\n", min(n, n2));
    printf("Maximum value in 2d array is %d\n", max(n, n2));

    return 0;

}