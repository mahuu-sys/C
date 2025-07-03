#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char ch;
    int length;

    printf("\nEnter the name => ");
    scanf("%s", name);
    length = strlen(name);

    for(int i = 0; i < length; i++) {
        ch = name[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||ch == 'u' || ch == 'U') {
            printf("7");}
        else{
            printf("%c",ch);
        }
    }

    return 0;
}

