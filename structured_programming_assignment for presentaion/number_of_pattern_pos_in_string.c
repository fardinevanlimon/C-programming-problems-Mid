#include <stdio.h>

int search(char *c1, char *c2, int size, int size2) {
    int cnt = 0, cnt2 = 0, index = 0;
    for(int i=0; i<size2; ++i) {
        for(int j=0; j<size; ++j) {
            if(c2[i]==c1[j]) {
                ++cnt2;
                ++i;
            }
            if(cnt2==size2) {
                ++cnt;
                cnt2 = 0;
                i = 0;
            }
        }
    }
    return cnt;
}

int size(char *c) {
    int cnt = 0;
    while(*c!='\0') {
        ++cnt;
        ++c;
    }
    return cnt;
}

int main() {

    char str[100];
    char p_str[100];
    scanf("%s %s", str, p_str);

    int s = size(str), s2 = size(p_str);

    int pos = search(str, p_str, s, s2);

    printf("%d\n", pos);

    return 0;

}