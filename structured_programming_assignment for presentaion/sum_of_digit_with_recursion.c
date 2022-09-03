#include <stdio.h>

int sum(int n, int temp) {
    if(n==0) return temp;
    temp += n%10;
    n/=10;
    return sum(n, temp);
}

int main() {

    int n;
    scanf("%d", &n);

    printf("%d\n", sum(n, 0));

    return 0;

}