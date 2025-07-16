#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100] = "Mahin";

    for (int i = 0; name[i]; i++) {
        name[i] = toupper(name[i]);
    }

    printf("\n%s\n", name);
    return 0;
}

