#include <stdio.h>
#include <string.h>

struct student {
    int sno;
    char sname[50];
    int hindi;
    int english;
};

int main() {
    struct student e[100];
    int n, i;

    printf("Enter limit => ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter sno => ");
        scanf("%d", &e[i].sno);
        getchar();

        printf("Enter sname => ");
        fgets(e[i].sname, sizeof(e[i].sname), stdin);
        e[i].sname[strcspn(e[i].sname, "\n")];

        printf("Enter hindi marks => ");
        scanf("%d", &e[i].hindi);
        getchar();

        printf("Enter english marks => ");
        scanf("%d", &e[i].english);
        getchar();
    }

    printf("%\n", "Student No", "Student Name", "Hindi Marks", "English Marks");
    printf("==================================================================\n");

    for(i = 0; i < n; i++) {
        printf("%\n", e[i].sno, e[i].sname, e[i].hindi, e[i].english);
    }

    return 0;
}

