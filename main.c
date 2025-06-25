#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;
    char name[100];
    
    printf("\nEnter name => ");
    gets(name);  

    int length = strlen(name);

    printf("Output => ");
    for (int i = 0; i < length; i++) {
        ch = name[i];
        if (i % 2 == 0) {
            printf("%c", toupper(ch));
        } else {
            printf("%c", tolower(ch));
        }
    }

    printf("\n");
    return 0;
}

