#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    char name[100];
    printf("\enter name=> ");
    gets(name);
    int length = strlen(name);
    int i;

    for (int i = length - 1; i >= 0; i--) {
        ch=name[i];
        printf("%c",ch);
    }
    return 0;
}

