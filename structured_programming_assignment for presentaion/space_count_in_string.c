#include <stdio.h>

int main() {

    char str[100];

    gets(str);

    int index = 0, cnt = 0;

    while(str[index]!='\0') {
        if(str[index]==' ') ++cnt;
        ++index;
    }

    printf("%d\n", cnt);    

    return 0;

}