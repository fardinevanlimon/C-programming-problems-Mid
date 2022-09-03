#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    printf("Before swaping the value:\n");
    printf("x = %d & y = %d\n", x, y);

    swap(&x, &y);
    printf("After swaping the value:\n");
    printf("x = %d & y = %d\n", x, y);

    return 0;

}