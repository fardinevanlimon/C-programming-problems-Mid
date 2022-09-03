#include <stdio.h>

struct info {
    char name[20];
    int id;
    float marks;
};

void sort(struct info *s2, int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size-1; j++) {
            if(s2[j].marks>s2[j+1].marks) {
                struct info temp = s2[j];
                s2[j] = s2[j+1];
                s2[j+1] = temp;
            }
        }
    } 
} 

int main() {

    int n;
    scanf("%d", &n);

    struct info s[n];

    for(int i=0; i<n; ++i) scanf("%s %d %f", &s[i].name, &s[i].id, &s[i].marks);

    sort(s, n);

    for(int i=0; i<n; ++i) {
        printf("Name: %s\n", s[i].name);
        printf("Id: %d\n", s[i].id);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;

}