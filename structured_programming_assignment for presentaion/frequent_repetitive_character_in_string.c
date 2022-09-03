#include <stdio.h>

int count(char *c, char c2, int start) {
    int index = start, cnt = 0;
    while(c[index]!='\0') {
        if(c2==c[index]) ++cnt;
        else break;
        ++index;
    }
    return cnt;
}

int max(int *a) {
    int m = a[0], pos = 0;
    for(int i=0; i<26; ++i) {
        if(m<a[i])  {
            m = a[i];
            pos = i;
        }
    }
    return pos;
}

int main() {

    char c[50];
    scanf("%s", c);

    int a[26], index = 0;

    for(int i=0; i<26; ++i) a[i] = 0;

    while(c[index]!='\0') {
        int e = 0;
        int cnt = count(c, c[index], index);
        int i = c[index]-'a';
        a[i] = (a[i]<cnt)? cnt:a[i];
        ++index;
    }

    int m_i = max(a);
    
    printf("%c\n", (m_i)+'a');

    return 0;

}