#include <stdio.h>
#include <string.h>

int main() {
    char name1[20]={"manav"};
    char name2[20]={"mansi"};

    printf("\n%s\n", name1);
    printf("\n%s\n", name2);

    strcpy(name1,name2);
    
    printf("\n%s\n", name1);
    printf("\n%s\n", name2);

    return 0;
}

